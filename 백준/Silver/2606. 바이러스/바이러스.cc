// 2606
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> graph[101];
bool visited[101];
int infected = 0;

void dfs(int node) {
  visited[node] = true;
  for (int i = 0; i < graph[node].size(); i++) {
    int next = graph[node][i];
    if (!visited[next]){
      infected++;
      dfs(next);
    }
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  dfs(1);

  cout << infected;
}