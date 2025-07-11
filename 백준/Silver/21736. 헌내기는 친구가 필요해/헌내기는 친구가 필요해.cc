// 21736
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
vector<string> campus;
bool visited[600][600];

// 방향 벡터: 상, 하, 좌, 우
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int startX, int startY) {
  queue<pair<int, int>> q;
  q.push({startX, startY});
  visited[startX][startY] = true;

  int friendCount = 0;

  while (!q.empty()) {
    pair<int, int> cur = q.front();
    q.pop();

    int x = cur.first;
    int y = cur.second;

    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      // 범위 체크 및 벽/방문 여부 확인
      if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
        if (!visited[nx][ny] && campus[nx][ny] != 'X') {
          visited[nx][ny] = true;
          q.push({nx, ny});

          if (campus[nx][ny] == 'P') friendCount++;
        }
      }
    }
  }

  return friendCount;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  campus.resize(n);

  int startX, startY;

  for (int i = 0; i < n; i++) {
    cin >> campus[i];
    for (int j = 0; j < m; j++) {
      if (campus[i][j] == 'I') {
        startX = i;
        startY = j;
      }
    }
  }

  int result = bfs(startX, startY);

  if (result == 0)
    cout << "TT";
  else
    cout << result;
}