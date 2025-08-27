// 1735 : 분수 합
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

int gcd(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;

  int bunmo = b * d;
  int bunja = a * d + c * b;

  int g = gcd(bunmo, bunja);
  bunmo /= g;
  bunja /= g;

  cout << bunja << " " << bunmo;
}