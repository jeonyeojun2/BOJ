// 11660 : 구간 합 구하기 5
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

const int MAX = 1025;
int arr[MAX][MAX];
int prefix_sum[MAX][MAX];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  // 입력
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      cin >> arr[i][j];
    }
  }

  // 2차원 누적합 계산
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      prefix_sum[i][j] = arr[i][j] + prefix_sum[i - 1][j] +
                         prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1];
    }
  }

  for (int q = 0; q < M; q++) {
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int result = prefix_sum[x2][y2] - prefix_sum[x1 - 1][y2] -
                 prefix_sum[x2][y1 - 1] + prefix_sum[x1 - 1][y1 - 1];

    cout << result << "\n";
  }
}