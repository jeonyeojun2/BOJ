// 2750 : 수 정렬하기
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

  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) cin >> v[i];

  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) cout << v[i] << "\n";
}