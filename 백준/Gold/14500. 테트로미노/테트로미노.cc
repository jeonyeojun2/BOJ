// 14500 : 테트로미노
// dfs + 백트래킹
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int N, M;
int board[500][500];
bool visited[500][500];
int max_sum = 0;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool isInBounds(int x, int y) { return (x >= 0 && x < N && y >= 0 && y < M); }

// DFS로 가능한 테트로미노 (4칸 연속 이동)
void dfs(int x, int y, int depth, int sum) {
  if (depth == 4) {
    max_sum = max(max_sum, sum);
    return;
  }

  for (int dir = 0; dir < 4; dir++) {
    int nx = x + dx[dir];
    int ny = y + dy[dir];

    if (isInBounds(nx, ny) && !visited[nx][ny]) {
      visited[nx][ny] = true;
      dfs(nx, ny, depth + 1, sum + board[nx][ny]);
      visited[nx][ny] = false;
    }
  }
}

// ㅗ, ㅏ, ㅜ, ㅓ 모양 예외 처리
void checkExtraShape(int x, int y) {
  // 중심 + 3방향 선택
  for (int i = 0; i < 4; i++) {
    int temp = board[x][y];

    for (int j = 0; j < 3; j++) {
      int dir = (i + j) % 4;
      int nx = x + dx[dir];
      int ny = y + dy[dir];

      if (!isInBounds(nx, ny)) {
        temp = -1;
        break;
      }

      temp += board[nx][ny];
    }

    if (temp != -1) {
      max_sum = max(max_sum, temp);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;

  // 입력받기
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> board[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      visited[i][j] = true;
      dfs(i, j, 1, board[i][j]);
      visited[i][j] = false;
      checkExtraShape(i, j);
    }
  }

  cout << max_sum;
}