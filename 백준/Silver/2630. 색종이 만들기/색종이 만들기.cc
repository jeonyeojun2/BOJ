// 2630
#include <algorithm>
#include <cmath>
#include <cstring>
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

int white = 0, blue = 0;
vector<vector<int>> paper;

// 같은 색으로만 구성되어 있는지 확인하는 함수
bool isSameColor(int x, int y, int size) {
  int color = paper[x][y];
  for (int i = x; i < x + size; ++i) {
    for (int j = y; j < y + size; ++j) {
      if (paper[i][j] != color) return false;
    }
  }
  return true;
}

// 종이를 분할해서 재귀적으로 처리하는 함수
void divide(int x, int y, int size) {
  if (isSameColor(x, y, size)) {
    if (paper[x][y] == 0)
      white++;
    else
      blue++;
    return;
  }

  int half = size / 2;
  divide(x, y, half);                // 1사분면
  divide(x, y + half, half);         // 2사분면
  divide(x + half, y, half);         // 3사분면
  divide(x + half, y + half, half);  // 4사분면
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  paper.resize(N, vector<int>(N));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      cin >> paper[i][j];
    }
  }

  divide(0, 0, N);

  cout << white << '\n';
  cout << blue;
}