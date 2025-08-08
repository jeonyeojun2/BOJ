// 2096 : 내려가기
// 슬라이딩 윈도우
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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  int a, b, c;
  int maxPrev[3], maxCurr[3];
  int minPrev[3], minCurr[3];

  // 첫 줄 입력
  cin >> a >> b >> c;
  maxPrev[0] = minPrev[0] = a;
  maxPrev[1] = minPrev[1] = b;
  maxPrev[2] = minPrev[2] = c;

  for (int i = 1; i < N; i++) {
    cin >> a >> b >> c;

    // 최댓값 갱신
    maxCurr[0] = max(maxPrev[0], maxPrev[1]) + a;
    maxCurr[1] = max({maxPrev[0], maxPrev[1], maxPrev[2]}) + b;
    maxCurr[2] = max(maxPrev[1], maxPrev[2]) + c;

    // 최솟값 갱신
    minCurr[0] = min(minPrev[0], minPrev[1]) + a;
    minCurr[1] = min({minPrev[0], minPrev[1], minPrev[2]}) + b;
    minCurr[2] = min(minPrev[1], minPrev[2]) + c;

    // 현재 값을 이전 값으로 복사
    for (int j = 0; j < 3; j++) {
      maxPrev[j] = maxCurr[j];
      minPrev[j] = minCurr[j];
    }
  }

  cout << max({maxPrev[0], maxPrev[1], maxPrev[2]}) << " "
       << min({minPrev[0], minPrev[1], minPrev[2]});
}