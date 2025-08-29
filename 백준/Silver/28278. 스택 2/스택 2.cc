// 28278 : 스택 2
// 스택
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

  int N;
  cin >> N;

  vector<int> st;
  st.reserve(N);

  while (N--) {
    int cmd;
    cin >> cmd;
    if (cmd == 1) {
      int x;
      cin >> x;
      st.push_back(x);
    } else if (cmd == 2) {
      if (st.empty())
        cout << -1 << '\n';
      else {
        cout << st.back() << '\n';
        st.pop_back();
      }
    } else if (cmd == 3) {
      cout << st.size() << '\n';
    } else if (cmd == 4) {
      cout << (st.empty() ? 1 : 0) << '\n';
    } else if (cmd == 5) {
      if (st.empty())
        cout << -1 << '\n';
      else
        cout << st.back() << '\n';
    }
  }
}