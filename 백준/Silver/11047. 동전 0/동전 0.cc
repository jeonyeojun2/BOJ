// 11047
#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K, cnt = 0;
  cin >> N >> K;

  int arr[N];

  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }

  for (int i = N - 1; i >= 0; i--) {
    if (K >= arr[i]) {
      cnt += K / arr[i];
      K %= arr[i];
    }
  }

  cout << cnt;
}
