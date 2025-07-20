// 5430
// 덱(deque)
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
    string p;
    cin >> p;

    int n;
    cin >> n;

    string arr_input;
    cin >> arr_input;

    deque<int> dq;
    string num;

    for (int i = 1; i < arr_input.size() - 1; i++) {
      if (arr_input[i] == ',') {
        dq.push_back(stoi(num));
        num.clear();
      } else {
        num += arr_input[i];
      }
    }

    if (!num.empty()) dq.push_back(stoi(num));

    bool isReversed = false;
    bool isError = false;

    for (char cmd : p) {
      if (cmd == 'R')
        isReversed = !isReversed;
      else if (cmd == 'D') {
        if (dq.empty()) {
          isError = true;
          break;
        }
        if (isReversed)
          dq.pop_back();
        else
          dq.pop_front();
      }
    }

    if (isError)
      cout << "error\n";
    else {
      cout << "[";
      if (isReversed) {
        for (int i = dq.size() - 1; i >= 0; i--) {
          cout << dq[i];
          if (i != 0) cout << ",";
        }
      } else {
        for (int i = 0; i < dq.size(); i++) {
          cout << dq[i];
          if (i != dq.size() - 1) cout << ",";
        }
      }
      cout << "]\n";
    }
  }
}