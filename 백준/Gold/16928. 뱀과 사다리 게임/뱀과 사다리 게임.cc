// 16928
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

int N, M;

int board[101];
bool visited[101];

int bfs() {
  queue<pair<int, int>> q;
  q.push({1, 0});
  visited[1] = true;

  while (!q.empty()) {
    int pos = q.front().first;
    int cnt = q.front().second;
    q.pop();

    for (int dice = 1; dice <= 6; dice++) {
      int next = pos + dice;

      if (next > 100) continue;

      next = board[next];

      if (!visited[next]) {
        if (next == 100) return cnt + 1;
        visited[next] = true;
        q.push({next, cnt + 1});
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;

  // 입력받기
  for (int i = 1; i <= 100; i++) {
    board[i] = i;
  }
  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;
    board[x] = y;
  }
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    board[u] = v;
  }

  cout << bfs();
}