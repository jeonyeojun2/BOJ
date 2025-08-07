// 1916 : 최소비용 구하기
// 다익스트라
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

const int INF = 1e9;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  // 그래프 : 입접 리스트
  vector<vector<pair<int, int>>> graph(n + 1);
  // 거리 배열 : 무한으로 초기
  vector<int> distance(n + 1, INF);

  // 입력
  for (int i = 0; i < m; i++) {
    int u, v, cost;
    cin >> u >> v >> cost;
    graph[u].push_back({v, cost});
  }

  int start, end;
  cin >> start >> end;

  // 우선순위 큐 : {비용, 도시}
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

  distance[start] = 0;
  pq.push({0, start});

  while (!pq.empty()) {
    int dist = pq.top().first;
    int now = pq.top().second;
    pq.pop();

    // 이미 더 짧은 거리로 방문했다면 스킵
    if (distance[now] < dist) continue;

    // 인접 도시 탐색
    for (auto& next : graph[now]) {
      int next_city = next.first;
      int cost = next.second;

      // 현재 도시까지 비용 + 다음 도시로 가는 비용
      if (distance[next_city] > distance[now] + cost) {
        distance[next_city] = distance[now] + cost;
        pq.push({distance[next_city], next_city});
      }
    }
  }

  cout << distance[end];
}