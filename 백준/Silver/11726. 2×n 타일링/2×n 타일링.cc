// 11726
#include <algorithm>
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

  int dp[1001];

  dp[1] = 1;
  dp[2] = 2;

  for (int i = 3; i <= n; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
  }

  cout << dp[n];
}