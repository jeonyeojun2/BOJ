// 11399
#include <algorithm>
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

  vector<int> P(N);

  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }

  sort(P.begin(), P.end());

  int total = 0;
  int result = 0;

  for (int i = 0; i < N; i++) {
    total += P[i];
    result += total;
  }

  cout << result;
}