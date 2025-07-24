// 7662
// multiset
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
    int k;
    cin >> k;

    multiset<int> ms;

    while (k--) {
      char c;
      int n;
      cin >> c >> n;

      if (c == 'I')
        ms.insert(n);
      else if (c == 'D') {
        if (ms.empty()) continue;
        if (n == 1) {
          auto it = prev(ms.end());
          ms.erase(it);
        }
        if (n == -1) {
          auto it = ms.begin();
          ms.erase(it);
        }
      }
    }

    if (ms.empty()) {
      cout << "EMPTY\n";
    } else {
      cout << *ms.rbegin() << " " << *ms.begin() << "\n";
    }
  }
}