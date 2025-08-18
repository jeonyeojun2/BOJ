// 2581 : 소수
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

bool isPrime(int k) {
  if (k < 2) return false;
  for (int i = 2; i <= sqrt(k); i++) {
    if (k % i == 0) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int m, n, sum = 0, minimum = INT_MAX;
  cin >> m >> n;

  for (int i = m; i <= n; i++) {
    if (isPrime(i)) {
      sum += i;
      minimum = min(minimum, i);
    }
  }

  if (sum == 0)
    cout << -1;
  else
    cout << sum << "\n" << minimum;
}