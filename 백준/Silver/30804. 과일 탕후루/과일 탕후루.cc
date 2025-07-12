// 30804
// 슬라이딩 윈도우 알고리즘
#include <algorithm>
#include <climits>
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
  cin >> N;

  vector<int> fruits(N);
  for (int i = 0; i < N; i++) cin >> fruits[i];

  unordered_map<int, int> count;  // 각 과일의 개수를 저장
  int left = 0, right = 0;
  int maxLength = 0;

  while (right < N) {
    count[fruits[right]]++;

    // 과일 종류가 2종류를 초과하면 왼쪽을 줄임
    while (count.size() > 2) {
      count[fruits[left]]--;
      if (count[fruits[left]] == 0) {
        count.erase(fruits[left]);
      }
      left++;
    }

    // 현재 구간 길이 갱신
    maxLength = max(maxLength, right - left + 1);
    right++;
  }

  cout << maxLength;
}