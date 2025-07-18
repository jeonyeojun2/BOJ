// 14940
// bfs
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

int n, m;
int sx, sy;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
vector<vector<int>> grid;
vector<vector<int>> dist;
vector<vector<bool>> visited;

void bfs(int sx, int sy) {
  queue<pair<int, int>> q;

  q.push({sx, sy});
  visited[sx][sy] = true;
  dist[sx][sy] = 0;

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int dir = 0; dir < 4; dir++) {
      int nx = x + dx[dir];
      int ny = y + dy[dir];

      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (visited[nx][ny]) continue;
      if (grid[nx][ny] == 0) continue;

      visited[nx][ny] = true;
      dist[nx][ny] = dist[x][y] + 1;
      q.push({nx, ny});
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  grid.resize(n, vector<int>(m));
  dist.resize(n, vector<int>(m, -1));
  visited.resize(n, vector<bool>(m, false));

  int sx = 0, sy = 0;

  // 입력받기
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
      if (grid[i][j] == 2) {
        sx = i;
        sy = j;
      }
    }
  }

  // 계산
  bfs(sx, sy);

  // 결과 출력
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (grid[i][j] == 0)
        cout << 0 << " ";
      else
        cout << dist[i][j] << " ";
    }
    cout << "\n";
  }
}