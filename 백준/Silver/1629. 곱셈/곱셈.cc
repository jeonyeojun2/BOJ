// 1629 : 곱셈
// 분할 정복
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

long long modPow(long long A, long long B, long long C) {
  if (B == 0) return 1;
  if (B == 1) return A % C;

  // B를 절반으로 나누어 계산 (분할 정복)
  long long half = modPow(A, B / 2, C);
  long long result = (half * half) % C;

  // B가 홀수라면 A를 한 번 더 곱함
  if (B % 2 == 1) result = (result * (A % C)) % C;

  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long A, B, C;
  cin >> A >> B >> C;

  cout << modPow(A, B, C);
}