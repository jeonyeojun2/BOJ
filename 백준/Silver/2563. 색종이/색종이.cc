// 2563 : 색종이
// 2차원 배열
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

  int n, cnt = 0;
  cin >> n;

  bool black[100][100] = {false};

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;

    for (int a = x - 1; a < x + 9; a++) {
      for (int b = y - 1; b < y + 9; b++) {
        black[a][b] = true;
      }
    }
  }

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      if (black[i][j]) cnt++;
    }
  }

  cout << cnt;
}