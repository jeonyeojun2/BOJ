// 2178
// BFS
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  vector<vector<int>> maze(N, vector<int>(M));

  // 입력 받기
  for (int i = 0; i < N; i++) {
    string row;
    cin >> row;

    for (int j = 0; j < M; j++) {
      maze[i][j] = row[j] - '0';
    }
  }

  // BFS
  vector<vector<bool>> visited(N, vector<bool>(M, false));
  queue<pair<int, int>> q;
  int dx[4] = {-1, 1, 0, 0};
  int dy[4] = {0, 0, 1, -1};

  q.push({0, 0});
  visited[0][0] = true;

  while (!q.empty()) {
    int cx = q.front().first;
    int cy = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++) {
      int nx = cx + dx[i];
      int ny = cy + dy[i];

      // 미로의 범위를 벗어나면 continue
      if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

      // 벽이거나 이미 방문했다면 continue
      if (maze[nx][ny] == 0 || visited[nx][ny]) continue;

      maze[nx][ny] = maze[cx][cy] + 1;
      visited[nx][ny] = true;
      q.push({nx, ny});
    }
  }

  cout << maze[N - 1][M - 1];
}