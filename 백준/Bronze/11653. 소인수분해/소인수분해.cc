// 11653 : 소인수분해
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

bool isPrime(int k) {  // 소수인가?
  if (k < 2) return true;
  for (int i = 2; i <= sqrt(k); i++) {
    if (k % i == 0) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, quotient;
  cin >> n;

  while (n != 1) {
    if (!isPrime(n)) {  // n이 소수가 아니면
      for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
          cout << i << "\n";
          quotient = i;
          break;
        }
      }
    } else {  // n이 소수라면
      cout << n;
      return 0;
    }
    n /= quotient;
  }
}