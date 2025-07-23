// 10026
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

int N;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

vector<vector<char>> grid;
vector<vector<bool>> visited;

//bfs
void bfs(int x, int y, vector<vector<char>>& grid,
         vector<vector<bool>>& visited, char color) {
  queue<pair<int, int>> q;
  q.push({x, y});
  visited[x][y] = true;

  while (!q.empty()) {
    int cx = q.front().first;
    int cy = q.front().second;
    q.pop();

    for (int dir = 0; dir < 4; dir++) {
      int nx = cx + dx[dir];
      int ny = cy + dy[dir];

      if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
        if (!visited[nx][ny] && grid[nx][ny] == color) {
          q.push({nx, ny});
          visited[nx][ny] = true;
        }
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;
  grid.resize(N, vector<char>(N));
  visited.resize(N, vector<bool>(N));

  // 입력
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    for (int k = 0; k < N; k++) {
      grid[i][k] = s[k];
    }
  }

  // 정상ver bfs
  int normal = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (!visited[i][j]) {
        bfs(i, j, grid, visited, grid[i][j]);
        normal++;
      }
    }
  }

  // 적록색약ver bfs
  int cb = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (grid[i][j] == 'G') grid[i][j] = 'R';
      visited[i][j] = false;
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (!visited[i][j]) {
        bfs(i, j, grid, visited, grid[i][j]);
        cb++;
      }
    }
  }

  cout << normal << " " << cb;
}