// 1427 : 소트인사이드
// 정렬
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

  string s;
  cin >> s;

  vector<int> v(s.size());

  for (int i = 0; i < s.size(); i++) v[i] = s[i] - 48;

  sort(v.begin(), v.end(), greater<int>());

  for (int i = 0; i < s.size(); i++) cout << v[i];
}