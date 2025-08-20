// 10101 : 삼각형 외우기
// 기하학
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

  int a, b, c;
  cin >> a >> b >> c;

  if (a == 60 && b == 60 && c == 60)
    cout << "Equilateral";
  else if (a + b + c == 180 && (a == b || b == c || a == c))
    cout << "Isosceles";
  else if (a + b + c == 180)
    cout << "Scalene";
  else
    cout << "Error";
}