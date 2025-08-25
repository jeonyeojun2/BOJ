// 1269 : 대칭 차집합
// 해시, 수학
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

  int aNum, bNum, gyo = 0, k;
  cin >> aNum >> bNum;

  unordered_set<int> a;

  for (int i = 0; i < aNum; i++) {
    cin >> k;
    a.insert(k);
  }

  for (int i = 0; i < bNum; i++) {
    cin >> k;

    if (a.find(k) != a.end()) gyo++;
  }

  cout << aNum + bNum - 2 * gyo;
}