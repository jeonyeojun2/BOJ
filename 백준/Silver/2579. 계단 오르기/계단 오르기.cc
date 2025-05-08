// 2579
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

  int score[301] = {0};  // 계단 점수 저장
  int dp[301] = {0};     // dp[i] = i번째 계단까지의 최대 점수

  for (int i = 0; i < n; i++) {
    cin >> score[i];
  }

  if (n == 1) {
    cout << score[0] << endl;
    return 0;
  }

  // 초기값 설정
  dp[0] = score[0];
  dp[1] = score[0] + score[1];
  dp[2] = max(score[0] + score[2], score[1] + score[2]);

  for (int i = 3; i < n; i++) {
    dp[i] = max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]);
  }

  cout << dp[n - 1] << endl;
}