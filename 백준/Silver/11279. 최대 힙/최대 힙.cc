// 11279
#include <algorithm>
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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  priority_queue<int> pq;

  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;

    if (k != 0) {
      pq.push(k);
    } else {
      if (!pq.empty()) {
        cout << pq.top() << "\n";
        pq.pop();
      } else {
        cout << 0 << "\n";
      }
    }
  }
}