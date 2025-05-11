// 11727
#include <algorithm>
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

  int dp[1001];

  dp[0] = 1;
  dp[1] = 1;

  for (int i = 2; i <= n; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
  }

  cout << dp[n];
}