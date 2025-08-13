// 1316 : 그룹 단어 체커
// 문자열
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

bool isGrouped(const string &word) {
  bool visited[26] = {false};
  char prev = 0;

  for (char c : word) {
    if (c != prev) {           // 앞의 문자와 다름
      if (visited[c - 'a']) {  // 이전에 나온 문자라면 그룹X
        return false;
      }
      visited[c - 'a'] = true;
    }
    prev = c;  // 앞의 문자 업데이트
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, count = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (isGrouped(s)) count++;
  }

  cout << count;
}