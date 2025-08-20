// 5073 : 삼각형과 세 변
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

  while (1) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) return 0;

    if (max(max(a, b), c) >= min(max(a, b), c) + min(min(a, b), c))
      cout << "Invalid\n";
    else if (a == b && b == c && a == c)
      cout << "Equilateral\n";
    else if (a == b || b == c || a == c)
      cout << "Isosceles\n";
    else if (a != b && b != c && a != c)
      cout << "Scalene\n";
    
  }
}