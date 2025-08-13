// 2566 : 최댓값
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

  int arr[9][9];
  int maximum = -1, x, y;

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> arr[i][j];
      if (arr[i][j] > maximum) {
        maximum = arr[i][j];
        x = i;
        y = j;
      }
    }
  }

  cout << maximum << "\n" << x + 1 << " " << y + 1;
}