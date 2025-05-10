// 9461
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

  int T;
  cin >> T;

  long long dp[101];
  dp[1] = dp[2] = dp[3] = 1;

  for (int i = 4; i <= 100; i++) {
    dp[i] = dp[i - 2] + dp[i - 3];
  }

  while (T--) {
    int N;
    cin >> N;

    cout << dp[N] << "\n";
  }
}