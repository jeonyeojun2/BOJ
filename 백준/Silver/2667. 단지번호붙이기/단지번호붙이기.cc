// 2667
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

int N;

vector<vector<int>> grid;
vector<vector<bool>> visited;

vector<int> result;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int i, int j) {
  int count = 1;
  queue<pair<int, int>> q;

  q.push({i, j});
  visited[i][j] = true;

  while (!q.empty()) {
    int cx = q.front().first;
    int cy = q.front().second;
    q.pop();

    for (int dir = 0; dir < 4; dir++) {
      int nx = cx + dx[dir];
      int ny = cy + dy[dir];

      if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;

      if (!visited[nx][ny] && grid[nx][ny] == 1) {
        visited[nx][ny] = true;
        q.push({nx, ny});
        count++;
      }
    }
  }

  return count;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;
  grid.resize(N, vector<int>(N));
  visited.resize(N, vector<bool>(N, false));

  // 입력 받기
  for (int i = 0; i < N; i++) {
    string line;
    cin >> line;

    for (int j = 0; j < N; j++) {
      grid[i][j] = line[j] - '0';
    }
  }

  // BFS 실행
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (!visited[i][j] && grid[i][j] == 1) {
        int houses = bfs(i, j);
        result.push_back(houses);
      }
    }
  }

  // 결과 출력
  sort(result.begin(), result.end());
  cout << result.size() << "\n";
  for (int cnt : result) {
    cout << cnt << "\n";
  }
}