// 18110
#include <algorithm>
#include <cmath>
#include <cstring>
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

  int n;
  cin >> n;

  if (n == 0) {
    cout << 0;
    return 0;
  }

  vector<int> v(n);

  for (int i = 0; i < n; i++) cin >> v[i];

  sort(v.begin(), v.end());

  int cut = round(n * 0.15);

  int sum = 0;
  for (int i = cut; i < n - cut; i++) sum += v[i];

  int valid_count = n - 2 * cut;
  int result = round((double)sum / valid_count);

  cout << result;
}