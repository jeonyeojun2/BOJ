// 2775
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
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

  int apt[15][15] = {0};

  for (int i = 1; i <= 14; i++) {
    apt[0][i] = i;  // 0층 i호에는 i명이 산다
  }

  // 나머지 층 계산
  for (int k = 1; k <= 14; k++) {
    for (int n = 1; n <= 14; n++) {
      for (int i = 1; i <= n; i++) {
        apt[k][n] += apt[k - 1][i];
      }
    }
  }

  // 입력 처리
  while (T--) {
    int k, n;
    cin >> k >> n;
    cout << apt[k][n] << '\n';
  }
}