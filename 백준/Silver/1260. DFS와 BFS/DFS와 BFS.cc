// 1260
#include <algorithm>
#include <cmath>
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

const int MAX = 1001;
vector<int> gragh[MAX];
bool visited_dfs[MAX];
bool visited_bfs[MAX];

void dfs(int v) {
  visited_dfs[v] = true;
  cout << v << " ";
  for (int u : gragh[v]) {
    if (!visited_dfs[u]) dfs(u);
  }
}

void bfs(int v) {
  queue<int> q;
  q.push(v);
  visited_bfs[v] = true;

  while (!q.empty()) {
    int curr = q.front();
    q.pop();
    cout << curr << " ";
    for (int u : gragh[curr]) {
      if(!visited_bfs[u]) {
        visited_bfs[u] = true;
        q.push(u);
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M, V;
  cin >> N >> M >> V;

  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    gragh[a].push_back(b);
    gragh[b].push_back(a);  // 양방향
  }

  for (int i = 1; i <= N; i++) {
    sort(gragh[i].begin(), gragh[i].end());
  }

  dfs(V);
  cout << "\n";
  bfs(V);
}