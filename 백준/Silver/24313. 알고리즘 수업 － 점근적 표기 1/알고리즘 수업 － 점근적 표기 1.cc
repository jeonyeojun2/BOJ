// 24313 : 알고리즘 수업 - 점근적 표기 1
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

  int a1, a0, c, n0;
  cin >> a1 >> a0 >> c >> n0;

  int f = a1 * n0 + a0;
  int g = c * n0;

  if (a1 <= c && f <= g)
    cout << 1;
  else
    cout << 0;
}