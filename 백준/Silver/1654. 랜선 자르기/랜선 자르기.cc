// 1654
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

  int k, n;
  cin >> k >> n;

  vector<long long> cables(k);
  long long maxLen = 0;

  for (int i = 0; i < k; i++) {
    cin >> cables[i];
    if (cables[i] > maxLen) maxLen = cables[i];
  }

  long long left = 1, right = maxLen;
  long long result = 0;

  while (left <= right) {
    long long mid = (left + right) / 2;
    long long count = 0;
    for (int i = 0; i < k; i++) {
      count += cables[i] / mid;
    }

    if (count >= n) {  // 너무 작은 값 이거나 정답으로 나눔
      result = mid;
      left = mid + 1;
    } else {  // 너무 큰 값으로 나눔
      right = mid - 1;
    }
  }

  cout << result;
}