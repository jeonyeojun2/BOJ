// 7576
// bfs
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

int M, N, max_days = 0;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

vector<vector<int>> box;

queue<pair<int, int>> q;

void bfs() {
  while (!q.empty()) {
    int cx = q.front().first;
    int cy = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++) {
      int nx = cx + dx[i];
      int ny = cy + dy[i];

      if (nx >= 0 && ny >= 0 && nx < N && ny < M && box[nx][ny] == 0) {
        box[nx][ny] = box[cx][cy] + 1;
        q.push({nx, ny});
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> M >> N;
  box.resize(N, vector<int>(M));

  // 입력 받기
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> box[i][j];
      if (box[i][j] == 1) {
        q.push({i, j});
      }
    }
  }

  bfs();

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (box[i][j] == 0) {
        cout << -1;
        return 0;
      }
      max_days = max(max_days, box[i][j]);
    }
  }

  cout << max_days - 1;
}