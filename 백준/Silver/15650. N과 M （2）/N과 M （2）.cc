// 15650 : N과 M (2)
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

void backtrack(int start, int depth) {
  if (depth == M) {
    for (int i = 0; i < M; i++) {
      cout << result[i] << " ";
    }
    cout << "\n";
    return;
  }

  for (int i = start; i <= N; i++) {
    result[depth] = i;
    backtrack(i + 1, depth + 1);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;

  backtrack(1, 0);
}