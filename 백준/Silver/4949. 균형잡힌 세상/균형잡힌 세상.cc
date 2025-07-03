// 4949
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
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

  string line;

  while (1) {
    getline(cin, line);

    if (line == ".") return 0;

    stack<char> s;
    bool balanced = true;

    for (char ch : line) {
      if (ch == '(' || ch == '[')
        s.push(ch);
      else if (ch == ')') {
        if (s.empty() || s.top() != '(') {
          balanced = false;
          break;
        }
        s.pop();
      } else if (ch == ']') {
        if (s.empty() || s.top() != '[') {
          balanced = false;
          break;
        }
        s.pop();
      }
    }

    if (!s.empty()) balanced = false;

    cout << (balanced ? "yes" : "no") << "\n";
  }
}