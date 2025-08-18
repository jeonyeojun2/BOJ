// 9506 : 약수들의 합
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
    int n, sum = 0;
    vector<int> v;
    cin >> n;

    if (n == -1) return 0;

    for (int i = 1; i < n; i++) {
      if (n % i == 0) {
        v.push_back(i);
        sum += i;
      }
    }

    if (sum == n) {
      cout << n << " = ";
      for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << " + ";
      }
      cout << v[v.size() - 1] << "\n";
    } else {
      cout << n << " is NOT perfect.\n";
    }
  }
}