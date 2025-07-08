// 2805
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
  long long M;
  cin >> N >> M;

  vector<int> trees(N);
  int maxTree = 0;

  for (int i = 0; i < N; i++) {
    cin >> trees[i];
    if (trees[i] > maxTree) maxTree = trees[i];
  }

  int left = 0, right = maxTree;
  int result = 0;

  while (left <= right) {
    int mid = (left + right) / 2;
    long long count = 0;

    for (int i = 0; i < N; i++) {
      if (mid < trees[i]) count += trees[i] - mid;
    }

    if (count >= M) {
      result = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  cout << result;
}