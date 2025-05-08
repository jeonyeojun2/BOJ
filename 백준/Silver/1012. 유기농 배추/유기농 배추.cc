// 1012
#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int T, M, N, K;
int field[51][51];     // 배추밭 정보
bool visited[51][51];  // 방문 여부

int dx[4] = {0, 0, -1, 1};  // 상하좌우 방향 벡터
int dy[4] = {-1, 1, 0, 0};

void dfs(int x, int y) {
  visited[x][y] = true;

  for (int dir = 0; dir < 4; dir++) {
    int nx = x + dx[dir];
    int ny = y + dy[dir];

    if (nx >= 0 && ny >= 0 && nx < M && ny < N) {
      if (field[nx][ny] == 1 && !visited[nx][ny]) {
        dfs(nx, ny);
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> T;

  while (T--) {
    cin >> M >> N >> K;

    // 초기화
    memset(field, 0, sizeof(field));
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < K; i++) {
      int x, y;
      cin >> x >> y;

      field[x][y] = 1;
    }

    int worm_count = 0;

    for (int i = 0; i < M; i++) {
      for (int j = 0; j < N; j++) {
        if (field[i][j] == 1 && !visited[i][j]) {
          dfs(i, j);
          worm_count++;
        }
      }
    }

    cout << worm_count << "\n";
  }
}