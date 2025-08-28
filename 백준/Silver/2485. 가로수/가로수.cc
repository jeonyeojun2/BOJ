// 2485 : 가로수
// 수학
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

// 최대공약수(GCD) 함수
long long gcd(long long a, long long b) {
  while (b != 0) {
    long long r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<long long> trees(N);
  for (int i = 0; i < N; i++) {
    cin >> trees[i];
  }

  // 간격 계산
  vector<long long> diffs;
  for (int i = 1; i < N; i++) {
    diffs.push_back(trees[i] - trees[i - 1]);
  }

  // 모든 간격들의 GCD 구하기
  long long g = diffs[0];
  for (int i = 1; i < diffs.size(); i++) {
    g = gcd(g, diffs[i]);
  }

  // 전체 필요한 나무 개수
  long long total = (trees.back() - trees.front()) / g + 1;

  // 새로 심어야 하는 나무 수
  cout << total - N << "\n";

}