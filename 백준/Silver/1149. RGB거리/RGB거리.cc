// 1149 : RGB거리
// DP
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

  int N;
  cin >> N;

  vector<vector<int>> cost(N, vector<int>(3));

  for (int i = 0; i < N; i++) cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

  vector<vector<int>> dp(N, vector<int>(3));

  dp[0][0] = cost[0][0];
  dp[0][1] = cost[0][1];
  dp[0][2] = cost[0][2];

  for (int i = 1; i < N; i++) {
    dp[i][0] = cost[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
    dp[i][1] = cost[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
    dp[i][2] = cost[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
  }

  int result = min(min(dp[N - 1][0], dp[N - 1][1]), dp[N - 1][2]);
  cout << result;
}