// 1966
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

  int T;
  cin >> T;

  while (T--) {
    int N, M;  // 문서의 개수 N, 궁금한 문서 M
    cin >> N >> M;

    queue<pair<int, int>> q;

    priority_queue<int> pq;

    for (int i = 0; i < N; i++) {
      int importance;
      cin >> importance;
      q.push({importance, i});
      pq.push(importance);
    }

    int printOrder = 0;

    while (!q.empty()) {
      int curImportance = q.front().first;
      int curIndex = q.front().second;

      q.pop();

      if (curImportance == pq.top()) {
        // 가장 높은 중요도 -> 출력
        printOrder++;
        pq.pop();
        if (curIndex == M) {
          cout << printOrder << "\n";
          break;
        }
      } else {
        q.push({curImportance, curIndex});
      }
    }
  }
}