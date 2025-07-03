// 11651
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
  if (a.second == b.second) return a.first < b.first; // 오름차순
  return a.second < b.second;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<pair<int, int>> v(N);

  for (int i = 0; i < N; i++)
    cin >> v[i].first >> v[i].second;

  sort(v.begin(), v.end(), compare);

  for (const auto& p : v)
    cout << p.first << " " << p.second << "\n";
}