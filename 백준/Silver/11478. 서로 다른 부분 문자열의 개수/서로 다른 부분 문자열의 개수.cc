// 11478 : 서로 다른 부분 문자열의 개수
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

  string s;
  cin >> s;

  unordered_set<string> set;

  int result = 0, strSize = s.size();

  for (int i = 1; i <= strSize; i++) {
    for (int j = 0; i + j <= strSize; j++) {
      string subStr = s.substr(j, i);
      if (set.find(subStr) == set.end()) {  // 중복된 원소가 없으면
        set.insert(subStr);
        result++;
      }
    }
  }

  cout << result;
}