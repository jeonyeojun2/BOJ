// 16953 : A → B
// BFS
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

// 역추적
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   long long A, B;
//   int cnt = 1;

//   cin >> A >> B;

//   while (B > A) {
//     if (B % 2 == 0) {
//       B /= 2;
//       cnt++;
//     } else if (B % 2 == 1) {
//       B /= 10;
//       cnt++;
//     } else {
//       return -1;
//     }
//   }

//   if (B == A)
//     cout << cnt;
//   else
//     cout << -1;
// }

// 일반적인 BFS
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long A, B;
  cin >> A >> B;

  queue<pair<long long, int>> q;  // {현재 값, 지금까지 연산 횟수}

  q.push({A, 1});

  while (!q.empty()) {
    long long cur = q.front().first;
    int cnt = q.front().second;
    q.pop();

    if (cur == B) {
      cout << cnt;
      return 0;
    }

    if (B >= cur * 2) q.push({cur * 2, cnt + 1});
    if (B >= cur * 10 + 1) q.push({cur * 10 + 1, cnt + 1});
  }

  cout << -1;
  return 0;
}