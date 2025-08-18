// 5086 : 배수와 약수
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

  while (1) {
    int a, b;
    cin >> a >> b;

    if (a == 0 && b == 0) return 0;

    if (a % b == 0)
      cout << "multiple\n";
    else if (b % a == 0)
      cout << "factor\n";
    else
      cout << "neither\n";
  }
}