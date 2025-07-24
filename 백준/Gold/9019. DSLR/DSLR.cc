// 9019 : DSLR
// bfs, 역추적
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

string bfs(int A, int B) {
  vector<bool> visited(10000, false);
  queue<pair<int, string>> q;

  q.push({A, ""});
  visited[A] = true;
  while (!q.empty()) {
    int num = q.front().first;
    string cmd = q.front().second;
    q.pop();

    if (num == B) return cmd;

    // D
    int next = (num * 2) % 10000;
    if (!visited[next]) {
      q.push({next, cmd + "D"});
      visited[next] = true;
    }

    // S
    next = (num != 0) ? num - 1 : 9999;
    if (!visited[next]) {
      q.push({next, cmd + "S"});
      visited[next] = true;
    }

    // L
    next = (num % 1000) * 10 + (num / 1000);
    if (!visited[next]) {
      q.push({next, cmd + "L"});
      visited[next] = true;
    }

    // R
    next = (num % 10) * 1000 + (num / 10);
    if (!visited[next]) {
      q.push({next, cmd + "R"});
      visited[next] = true;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int A, B;
    cin >> A >> B;

    cout << bfs(A, B) << "\n";
  }
}