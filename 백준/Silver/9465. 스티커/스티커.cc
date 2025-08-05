// 9465 : 스티커
// dp
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

  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;

    int sticker[2][n];
    int dp[2][n];

    // 입력
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < n; j++) {
        cin >> sticker[i][j];
      }
    }

    if (n == 1) {
      cout << max(sticker[0][0], sticker[1][0]) << "\n";
      continue;
    }

    // dp[0][i]: i번째 열에서 윗줄 스티커를 고를 때 최대 점수
    // dp[1][i]: i번째 열에서 아랫줄 스티커를 고를 때 최대 점수

    dp[0][0] = sticker[0][0];  // 윗줄 첫 스티커
    dp[1][0] = sticker[1][0];  // 아랫줄 첫 스티커

    dp[0][1] = dp[1][0] + sticker[0][1];
    dp[1][1] = dp[0][0] + sticker[1][1];

    for (int i = 2; i < n; i++) {
      dp[0][i] = max(dp[1][i - 2], dp[1][i - 1]) + sticker[0][i];
      dp[1][i] = max(dp[0][i - 2], dp[0][i - 1]) + sticker[1][i];
    }

    cout << max(dp[0][n - 1], dp[1][n - 1]) << "\n";
  }
}