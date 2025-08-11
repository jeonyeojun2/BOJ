// 15686 : 치킨 배달
// DFS
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

int n, m;
vector<vector<int>> city;
vector<pair<int, int>> chicken, house;

bool selected[13];  // 치킨집 선택 여부

int answer = INT_MAX;

void dfs(int start, int cnt) {
  if (cnt == m) {
    int sum = 0;
    for (auto &h : house) {
      int house_sum = INT_MAX;

      for (int i = 0; i < chicken.size(); i++) {
        if (selected[i]) {
          int d =
              abs(h.first - chicken[i].first) + abs(h.second - chicken[i].second);
          house_sum = min(house_sum, d);
        }
      }
      sum += house_sum;
    }
    answer = min(answer, sum);
    return;
  }

  for (int i = start; i < chicken.size(); i++) {
    selected[i] = true;
    dfs(i + 1, cnt + 1);
    selected[i] = false;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  city.resize(n, vector<int>(n));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> city[i][j];
      if (city[i][j] == 1)
        house.push_back({i, j});
      else if (city[i][j] == 2)
        chicken.push_back({i, j});
    }
  }

  dfs(0, 0);
  cout << answer;
}