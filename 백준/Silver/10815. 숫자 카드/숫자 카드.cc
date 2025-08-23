// 10815 : 숫자 카드
// 해시
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

  int n, m;
  cin >> n;
  unordered_set<int> cards;

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    cards.insert(k);
  }

  cin >> m;
  for (int i = 0; i < m; i++) {
    int num;
    cin >> num;

    if (cards.find(num) != cards.end()) {
      cout << 1 << " ";
    } else {
      cout << 0 << " ";
    }
  }
}