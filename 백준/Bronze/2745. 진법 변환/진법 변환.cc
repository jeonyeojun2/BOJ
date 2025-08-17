// 2745 : 진법 변환
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

  string s;
  int b;
  long long result = 0;
  long long power = 1;
  cin >> s >> b;

  for (int i = s.size() - 1; i >= 0; i--) {
    int digit;
    if (s[i] >= '0' && s[i] <= '9')
      digit = s[i] - '0';
    else
      digit = s[i] - 'A' + 10;

    result += digit * power;
    power *= b;
  }

  cout << result;
}