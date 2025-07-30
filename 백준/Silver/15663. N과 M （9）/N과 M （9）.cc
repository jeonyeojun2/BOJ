// 15663 : N과 M (9)
// 백트래킹
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
int arr[10];
int res[10];
bool visited[10];

void dfs(int depth) {
  if (depth == M) {
    for (int i = 0; i < M; i++) {
      cout << res[i] << " ";
    }
    cout << "\n";
    return;
  }

  int temp = 0;
  for (int i = 0; i < N; i++) {
    if (!visited[i] && temp != arr[i]) {
      temp = arr[i];
      res[depth] = arr[i];
      visited[i] = true;
      dfs(depth + 1);
      visited[i] = false;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;

  for (int i = 0; i < N; i++) cin >> arr[i];

  sort(arr, arr + N);

  dfs(0);
}