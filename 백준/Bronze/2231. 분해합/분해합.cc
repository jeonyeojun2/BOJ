// 2231
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, result = 0;
  cin >> N;

  for (int i = max(1, N - 9 * 7); i < N; i++) {
    int sum = i;
    int temp = i;

    while (temp > 0) {
      sum += temp % 10;
      temp /= 10;
    }

    if (sum == N) {
      result = i;
      break;
    }
  }

  cout << result;
}