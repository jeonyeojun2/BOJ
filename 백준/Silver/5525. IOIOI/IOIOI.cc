// 5525
// string + 슬라이딩 윈도우
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

  int N, M;
  string S;

  cin >> N >> M;
  cin >> S;

  int result = 0;
  int count = 0;

  for (int i = 1; i < M - 1;) {
    if (S[i - 1] == 'I' && S[i] == 'O' && S[i + 1] == 'I') {
      count++;
      if (count == N) {
        result++;
        count--;
      }
      i += 2;
    } else {
      count = 0;
      i++;
    }
  }

  cout << result;
}