// 11725 : 트리의 부모 찾기
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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> graph[N + 1];
  vector<bool> visited(N + 1);

  vector<int> result(N + 1, false);

  queue<int> q;

  for (int i = 1; i < N; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  q.push(1);
  visited[1] = true;

  while (!q.empty()) {
    int k = q.front();
    q.pop();

    for (int t : graph[k]) {
      if (!visited[t]) {
        q.push(t);
        visited[t] = true;
        result[t] = k;
      }
    }
  }

  for (int i = 2; i <= N; i++) {
    cout << result[i] << "\n";
  }
}