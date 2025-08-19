// 1085 : 직사각형에서 탈출
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

  int x, y, w, h, result = 0;
  cin >> x >> y >> w >> h;

  result = min(min(min(x, y), abs(x - w)), abs(y - h));

  cout << result;
}