// 2501 : 약수 구하기
// 수학
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

  int n, k;
  cin >> n >> k;

  vector<int> v;

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) v.push_back(i);
  }

  if (v.size() >= k)
    cout << v[k - 1];
  else
    cout << 0;
}