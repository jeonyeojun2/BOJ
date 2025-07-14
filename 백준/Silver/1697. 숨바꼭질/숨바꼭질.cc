// 1389
// BFS
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

int MAX = 100001;

int bfs(int start, int b) {
  queue<pair<int, int>> q;
  vector<bool> visited(MAX, false);

  q.push({start, 0});

  while (!q.empty()) {
    int curPose = q.front().first;
    int curTime = q.front().second;

    q.pop();

    visited[curPose] = true;

    if (curPose == b) return curTime;

    // X-1로 가는 경우
    if (curPose - 1 >= 0 && !visited[curPose - 1]) {
      q.push({curPose - 1, curTime + 1});
    }

    // X+1로 가는 경우
    if (curPose + 1 <= MAX && !visited[curPose + 1]) {
      q.push({curPose + 1, curTime + 1});
    }

    // X*2로 가는 경우
    if (curPose * 2 <= MAX && !visited[curPose * 2]) {
      q.push({curPose * 2, curTime + 1});
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K;
  cin >> N >> K;

  int result = 0;

  if (N >= K) {
    result = N - K;
  } else {
    result = bfs(N, K);
  }

  cout << result;
}