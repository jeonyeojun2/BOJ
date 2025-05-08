// 1927
#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
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

  priority_queue<int, vector<int>, greater<int>> minHeap;

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;

    if (x > 0) {
      minHeap.push(x);
    } else if (x == 0) {
      if (minHeap.empty()) {
        cout << 0 << "\n";
      } else {
        cout << minHeap.top() << "\n";
        minHeap.pop();
      }
    }
  }
}