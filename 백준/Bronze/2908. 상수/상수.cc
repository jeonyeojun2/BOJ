// 2908 : 상수
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

  string a, b;
  cin >> a >> b;
  string aChange, bChange;

  for (int i = 2; i >= 0; i--) {
    aChange += a[i];
    bChange += b[i];
  }

  cout << max(stoi(aChange), stoi(bChange));
}