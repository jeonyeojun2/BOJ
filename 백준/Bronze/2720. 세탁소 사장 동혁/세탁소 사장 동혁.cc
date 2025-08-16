// 2720 : 세탁소 사장 동혁
// 그리디
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

  int T;
  cin >> T;

  while (T--) {
    int C;
    cin >> C;

    int Q = C / 25;
    C %= 25;

    int D = C / 10;
    C %= 10;

    int N = C / 5;
    C %= 5;

    int P = C;

    cout << Q << " " << D << " " << N << " " << P << "\n";
  }
}