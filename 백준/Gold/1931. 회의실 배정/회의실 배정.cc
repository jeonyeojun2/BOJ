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

// 끝나는 시간을 기준으로 정렬, 같으면 시작시간이 빠른 순
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
  if (a.second == b.second) return a.first < b.first;
  return a.second < b.second;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, result = 0;
  cin >> N;

  vector<pair<int, int>> meetings; // (시작시간, 끝나는시간)

  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    meetings.push_back({a, b});
  }

  sort(meetings.begin(), meetings.end(), compare);

  int endTime = 0;
  for (int i = 0; i < N; i++) {
    if (endTime > meetings[i].first) continue;
    endTime = meetings[i].second;
    result++;
  }

  cout << result;
}
