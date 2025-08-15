// 10798 : 세로읽기
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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  char ch[5][15];
  bool filled[5][15] = {false};

  for (int i = 0; i < 5; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < s.size(); j++) {
      ch[i][j] = s[j];
      filled[i][j] = true;
    }
  }

  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 5; j++) {
      if (filled[j][i]) cout << ch[j][i];
    }
  }
}