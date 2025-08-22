// 2587 : 대표값2
// 정렬
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

  int sum = 0, mid = 0;
  vector<int> v(5);

  for (int i = 0; i < 5; i++) {
    cin >> v[i];
    sum += v[i];
  }

  sort(v.begin(), v.end());

  cout << sum / 5 << "\n";
  cout << v[2];
}