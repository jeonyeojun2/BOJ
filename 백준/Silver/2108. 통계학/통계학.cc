// 2018
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

  int N, sum = 0;
  cin >> N;  // N은 홀수

  int mean, mid, mode, range;

  vector<int> v(N);

  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  // 평균
  for (int i = 0; i < N; i++) sum += v[i];
  mean = round((double)sum / N);
  cout << mean << "\n";

  // 중앙값
  mid = v[N / 2];
  cout << mid << "\n";

  // 최빈값
  int count[8001] = {
      0,
  };
  int maxCount = 0;

  for (int i = 0; i < N; i++) {
    count[v[i] + 4000]++;
    maxCount = max(maxCount, count[v[i] + 4000]);
  }

  vector<int> modeCandidates;
  for (int i = 0; i <= 8000; i++) {
    if (count[i] == maxCount) {
      modeCandidates.push_back(i - 4000);
    }
  }

  sort(modeCandidates.begin(), modeCandidates.end());

  mode = (modeCandidates.size()>=2) ? modeCandidates[1] : modeCandidates[0];
  cout << mode << "\n";

  // 범위
  range = v[N - 1] - v[0];
  cout << range;
}