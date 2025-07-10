// 18111
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
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

  int N, M, B;
  cin >> N >> M >> B;

  vector<vector<int>> ground(N, vector<int>(M));
  int min_h = 256, max_h = 0;

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      cin >> ground[i][j];
      min_h = min(min_h, ground[i][j]);
      max_h = max(max_h, ground[i][j]);
    }
  }

  int result_time = INT_MAX;
  int result_height = -1;

  for (int h = min_h; h <= max_h; h++) {
    int time = 0;
    int block = B;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        int diff = ground[i][j] - h;

        if (diff > 0) {  // 1번 작업 : 블록 제거
          time += 2 * diff;
          block += diff;
        } else if (diff < 0) {  // 2번 작업 : 블록 놓기
          time -= diff;
          block += diff;
        }
      }
    }

    if (block >= 0) {
      if (time < result_time || ((time == result_time) && h > result_height)) {
        result_height = h;
        result_time = time;
      }
    }
  }

  cout << result_time << " " << result_height;
}