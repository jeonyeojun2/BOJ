// 17626
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
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

  vector<int> dp(n + 1, 1e9);
  dp[0] = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j * j <= i; j++) {
      dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
  }

  cout << dp[n];
}