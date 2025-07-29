// 11725 : 트리의 부모 찾기
// bfs, dfs
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

// void dfs(int node) {
//   visited[node] = true;

//   for (int next : graph[node]) {
//     if (!visited[next]) {
//       result[next] = node; // 부모 기록
//       dfs(next);           // 재귀 호출
//     }
//   }
// }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> graph[N + 1];
  vector<bool> visited(N + 1, false);
  vector<int> result(N + 1);

  queue<int> q;

  for (int i = 1; i < N; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  // dfs(1); dfs버전, 1(루트)에서 시작

  q.push(1);
  visited[1] = true;

  while (!q.empty()) {
    int cur = q.front();
    q.pop();

    for (int next : graph[cur]) {
      if (!visited[next]) {
        visited[next] = true;
        result[next] = cur;
        q.push(next);
      }
    }
  }

  for (int i = 2; i <= N; i++) {
    cout << result[i] << "\n";
  }
}
