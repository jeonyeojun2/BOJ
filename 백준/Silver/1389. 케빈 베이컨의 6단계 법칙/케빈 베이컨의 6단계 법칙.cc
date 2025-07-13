// 1389
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

int N, M;
vector<vector<int>> graph;

int getBaconNumber(int start) {
  vector<int> distance(N + 1, -1);
  queue<int> q;

  q.push(start);
  distance[start] = 0;

  while (!q.empty()) {
    int cur = q.front();
    q.pop();

    for (int next : graph[cur]) {
      if (distance[next] == -1) {
        distance[next] = distance[cur] + 1;
        q.push(next);
      }
    }
  }

  int total = 0;
  for (int i = 1; i <= N; i++) {
    total += distance[i];
  }

  return total;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;
  graph.resize(N + 1);

  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  int answer = 0;
  int minBacon = INT_MAX;

  for (int i = 1; i <= N; i++) {
    int bacon = getBaconNumber(i);
    if (minBacon > bacon) {
      minBacon = bacon;
      answer = i;
    }
  }

  cout << answer;
}