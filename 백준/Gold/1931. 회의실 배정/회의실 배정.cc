// 1931
// 그리디
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

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
  if (a.second == b.second) return a.first < b.first;
  return a.second < b.second;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, result=0;
  cin >> N;

  vector<pair<int, int>> v;

  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    v.push_back({a, b});
  }

  sort(v.begin(), v.end(), compare);

  int end = 0;
  for (int i = 0; i < N; i++) {
    if (end > v[i].first) continue;
    end = v[i].second;
    result++;
  }

  cout << result;
}