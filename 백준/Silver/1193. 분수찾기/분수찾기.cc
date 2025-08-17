// 1193 : 분수찾기
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

  long long X;
  cin >> X;

  long long k = 1;

  while (X > k * (k + 1) / 2) {
    k++;
  }

  long long prev = (k - 1) * k / 2;
  long long idx = X - prev;

  if (k % 2 == 0) {
    cout << idx << "/" << k - idx + 1;
  } else {
    cout << k - idx + 1 << "/" << idx;
  }
}