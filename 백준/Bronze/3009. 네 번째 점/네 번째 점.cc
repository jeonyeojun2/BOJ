// 3009 : 네 번째 점
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

  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  if (x1 == x2)
    x4 = x3;
  else if (x1 == x3)
    x4 = x2;
  else
    x4 = x1;

  if (y1 == y2)
    y4 = y3;
  else if (y1 == y3)
    y4 = y2;
  else
    y4 = y1;

  cout << x4 << " " << y4;
}