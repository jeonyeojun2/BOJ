// 2941 : 크로아티아 알파벳
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

  string croatia;
  if (!(cin >> croatia)) return 0;

  int n = croatia.size();
  int i = 0;
  int count = 0;

  while (i < n) {
    // dz=
    if (i + 2 < n && croatia[i] == 'd' && croatia[i + 1] == 'z' &&
        croatia[i + 2] == '=') {
      count++;
      i += 3;
      continue;
    }
    // 2글자 패턴
    if (i + 1 < n) {
      string two = croatia.substr(i, 2);
      if (two == "c=" || two == "c-" || two == "d-" || two == "lj" ||
          two == "nj" || two == "s=" || two == "z=") {
        count++;
        i += 2;
        continue;
      }
    }
    // 위에 해당하지 않으면 일반 글자
    count++;
    i += 1;
  }

  cout << count;
}