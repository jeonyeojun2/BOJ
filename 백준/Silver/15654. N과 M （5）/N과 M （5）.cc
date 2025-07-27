// 15654 : N과 M (5)
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

int N, M, result[8];

vector<int> nums;
vector<int> sequence;

bool visited[8];

void dfs(int depth) {
  if (depth == M) {
    for (int i = 0; i < M; i++) cout << sequence[i] << " ";
    cout << "\n";
    return;
  }

  for (int i = 0; i < N; i++) {
    if (!visited[i]) {
      visited[i] = true;
      sequence[depth] = nums[i];
      dfs(depth + 1);
      visited[i] = false;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;
  nums.resize(N);
  sequence.resize(N);

  for (int i = 0; i < N; i++) cin >> nums[i];

  sort(nums.begin(), nums.end());

  dfs(0);
}