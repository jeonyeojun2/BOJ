// 15666 : N과 M (12)
// 백트래킹 (dfs)
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

int N, M;
int num[10];
int result[10];

void dfs(int depth, int start) {
  if (depth == M) {
    for (int i = 0; i < M; i++) cout << result[i] << " ";
    cout << "\n";
    return;
  }

  int last = -1;
  for (int i = start; i < N; i++) {
    if (last == num[i]) continue;
    result[depth] = num[i];
    dfs(depth + 1, i);
    last = num[i];
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;

  for (int i = 0; i < N; i++) cin >> num[i];

  sort(num, num + N);

  dfs(0, 0);
}