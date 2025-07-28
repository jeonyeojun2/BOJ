// 11053 : 가장 긴 증가하는 부분 수열
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

  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> dp(N, 1);

  for (int i = 0; i < N; i++) cin >> A[i];

  for (int i = 1; i < N; i++) {
    for (int j = 0; j < i; j++) {
      if (A[j] < A[i]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }

  int lis_length = *max_element(dp.begin(), dp.end());

  cout << lis_length;
}