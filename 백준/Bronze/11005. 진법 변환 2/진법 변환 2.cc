// 11005 : 진법 변환 2
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

  long long n;
  int b;
  string result = "";

  cin >> n >> b;

  while (n > 0) {
    int remainder = n % b;
    n /= b;

    if (remainder < 10)
      result += (char)('0' + remainder);
    else
      result += (char)('A' + (remainder - 10));
  }

  reverse(result.begin(), result.end());

  cout << result;
}