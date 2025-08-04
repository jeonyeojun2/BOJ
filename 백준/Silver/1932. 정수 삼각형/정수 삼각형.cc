// 1932 : 정수 삼각형
// 분할 정복
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

  int n;
  cin >> n;

  vector<vector<int>> triangle(n, vector<int>(n));

  // 입력
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cin >> triangle[i][j];
    }
  }

  // dp
  for (int i = n - 2; i >= 0; i--) {
    for (int j = 0; j <= i; j++) {
      triangle[i][j] += max(triangle[i + 1][j], triangle[i + 1][j + 1]);
    }
  }

  cout << triangle[0][0];
}