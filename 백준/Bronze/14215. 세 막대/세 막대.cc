// 14215 : 세 막대
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

  int arr[3] = {a, b, c};
  sort(arr, arr + 3);

  a = arr[0];
  b = arr[1];
  c = arr[2];

  if (a + b > c) {
    cout << a + b + c << "\n";
  } else {
    cout << (a + b) * 2 - 1 << "\n";
  }
}