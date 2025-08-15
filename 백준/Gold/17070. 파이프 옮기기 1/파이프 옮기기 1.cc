// 17070 : 파이프 옮기기 1
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

int n;
int board[17][17];
int dp[17][17][3];
// dp[r][c][dir]: (r, c)가 파이프의 끝이고 dir 방향일 때 경우의 수
// dir: 0 = 가로, 1 = 세로, 2 = 대각선

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) cin >> board[i][j];
  }

  dp[1][2][0] = 1;  // 초기값: (1,1)-(1,2) 가로 방향

  for (int r = 1; r <= n; r++) {
    for (int c = 1; c <= n; c++) {
      if (board[r][c] == 1) continue;

      // 가로 -> 가로 이동
      if (c + 1 <= n && board[r][c + 1] == 0) {
        dp[r][c + 1][0] += dp[r][c][0];
      }

      // 가로 -> 대각선 이동
      if (r + 1 <= n && c + 1 <= n && board[r + 1][c + 1] == 0 &&
          board[r][c + 1] == 0 && board[r + 1][c] == 0) {
        dp[r + 1][c + 1][2] += dp[r][c][0];
      }

      // 세로 -> 세로 이동
      if (r + 1 <= n && board[r + 1][c] == 0) {
        dp[r + 1][c][1] += dp[r][c][1];
      }

      // 세로 -> 대각선 이동
      if (r + 1 <= n && c + 1 <= n && board[r + 1][c + 1] == 0 &&
          board[r][c + 1] == 0 && board[r + 1][c] == 0) {
        dp[r + 1][c + 1][2] += dp[r][c][1];
      }

      // 대각선 -> 가로 이동
      if (c + 1 <= n && board[r][c + 1] == 0) {
        dp[r][c + 1][0] += dp[r][c][2];
      }

      // 대각선 -> 세로 이동
      if (r + 1 <= n && board[r + 1][c] == 0) {
        dp[r + 1][c][1] += dp[r][c][2];
      }

      // 대각선 -> 대각선 이동
      if (r + 1 <= n && c + 1 <= n && board[r + 1][c + 1] == 0 &&
          board[r + 1][c] == 0 && board[r][c + 1] == 0) {
        dp[r + 1][c + 1][2] += dp[r][c][2];
      }
    }
  }

  int answer = dp[n][n][0] + dp[n][n][1] + dp[n][n][2];
  cout << answer;
}