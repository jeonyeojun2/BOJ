// 1074
// 분할-정복
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

int Z(int n, int r, int c) {
  if (n == 0) return 0;

  int half = 1 << (n - 1); // half = 2^(n-1)
  int quadrant_size = half * half;

  // 사분면에 따라 위치 이동 및 offset 계산
  if (r < half && c < half) {
    return 0 * quadrant_size + Z(n - 1, r, c);  // 1사분면
  } else if (r < half && c >= half) {
    return 1 * quadrant_size + Z(n - 1, r, c - half);  // 2사분면
  } else if (r >= half && c < half) {
    return 2 * quadrant_size + Z(n - 1, r - half, c);  // 3사분면
  } else {
    return 3 * quadrant_size + Z(n - 1, r - half, c - half);  // 4사분면
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, r, c;
  cin >> N >> r >> c;

  cout << Z(N, r, c);
}