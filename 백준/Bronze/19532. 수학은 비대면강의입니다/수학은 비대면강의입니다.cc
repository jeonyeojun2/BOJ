// 19532 : 수학은 비대면강의입니다
// 브루트포스
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

  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  for (int x = -999; x < 1000; x++) {
    for (int y = -999; y < 1000; y++) {
      if (a * x + b * y == c && d * x + e * y == f) {
        cout << x << " " << y;
        return 0;
      }
    }
  }
}