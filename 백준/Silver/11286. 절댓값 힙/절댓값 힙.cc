// 11286
// 우선순위 큐
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
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

struct compare {
  bool operator()(int a, int b) {
    if (abs(a) == abs(b)) return a > b;  // 절댓값 같으면 더 작은 수 먼저
    return abs(a) > abs(b);              // 절댓값 작은 게 먼저 오도록
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  priority_queue<int, vector<int>, compare> pq;

  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;

    if (k != 0) {
      pq.push(k);
    } else {
      if (!pq.empty()) {
        cout << pq.top() << "\n";
        pq.pop();
      } else
        cout << 0 << "\n";
    }
  }
}