// 11659
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

  int N, M;
  cin >> N >> M;

  vector<int> arr(N + 1);        // 입력 배열
  vector<int> prefixSum(N + 1);  // 누적합 배열

  // 배열 입력 및 누적합 계산
  for (int i = 1; i <= N; i++) {
    cin >> arr[i];
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }

  // 구간 합 계산 및 출력
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    cout << prefixSum[b] - prefixSum[a - 1] << "\n";
  }
}