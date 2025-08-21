// 24267 : 알고리즘 수업 - 알고리즘의 수행 시간 6
// 시뮬레이션
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

  long long n;
  cin >> n;

  cout << n * (n - 1) * (n - 2) / 6 << "\n";
  cout << 3 << "\n";
}