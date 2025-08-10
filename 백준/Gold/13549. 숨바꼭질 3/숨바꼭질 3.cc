// 13549 : 숨바꼭질 3
// 0-1 BFS
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

const int MAX = 100000;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;

  vector<int> time(MAX + 1, INT_MAX);
  deque<int> dq;

  time[n] = 0;
  dq.push_front(n);

  while (!dq.empty()) {
    int now = dq.front();
    dq.pop_front();

    if (now == k) {
      cout << time[now];
      return 0;
    }

    // 0초 이동: 순간이동
    int teleport = 2 * now;
    if (teleport <= MAX && time[teleport] > time[now]) {
      time[teleport] = time[now];
      dq.push_front(teleport);  // 0초이므로 앞에 삽입
    }

    // 1초 이동: 뒤로 한 칸
    int back = now - 1;
    if (back >= 0 && time[back] > time[now] + 1) {
      time[back] = time[now] + 1;
      dq.push_back(back);  // 1초이므로 뒤에 삽입
    }  
    
    // 1초 이동: 앞으로 한 칸
    int forward = now + 1;
    if (forward <= MAX && time[forward] > time[now] + 1) {
      time[forward] = time[now] + 1;
      dq.push_back(forward);  // 1초이므로 뒤에 삽입
    }
  }
}