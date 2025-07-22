// 7569
// bfs
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

int M, N, H;

int dx[6] = {-1, 1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int box[100][100][100];  // box[H][N][M]

queue<tuple<int, int, int>> q;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> M >> N >> H;

  for (int h = 0; h < H; h++) {
    for (int n = 0; n < N; n++) {
      for (int m = 0; m < M; m++) {
        cin >> box[h][n][m];
        if (box[h][n][m] == 1) {
          q.push(make_tuple(h, n, m));
        }
      }
    }
  }

  while (!q.empty()) {
    int ch = get<0>(q.front());
    int cn = get<1>(q.front());
    int cm = get<2>(q.front());
    q.pop();

    for (int i = 0; i < 6; i++) {
      int nh = ch + dx[i];
      int nn = cn + dy[i];
      int nm = cm + dz[i];

      // 범위에 벗어남
      if (nh < 0 || nh >= H || nn < 0 || nn >= N || nm < 0 || nm >= M) continue;

      if (box[nh][nn][nm] == 0) {
        box[nh][nn][nm] = box[ch][cn][cm] + 1;
        q.push({nh, nn, nm});
      }
    }
  }

  int max_days = 0;
  for (int h = 0; h < H; h++) {
    for (int n = 0; n < N; n++) {
      for (int m = 0; m < M; m++) {
        if (box[h][n][m] != 0) {
          max_days = max(max_days, box[h][n][m]);
        } else {
          cout << -1;
          return 0;
        }
      }
    }
  }

  cout << max_days - 1;
}