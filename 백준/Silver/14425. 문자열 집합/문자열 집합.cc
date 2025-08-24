// 14425 : 문자열 집합
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
  cin >> n >> m;

  unordered_set<string> s;
  string str;

  // 집합 s 입력
  for (int i = 0; i < n; i++) {
    cin >> str;
    s.insert(str);
  }

  int count = 0;
  // 검사 문자열 입력 & 검사
  for (int i = 0; i < m; i++) {
    cin >> str;
    if (s.find(str) != s.end()) count++;
  }

  cout << count;
}