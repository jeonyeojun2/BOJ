// 5525
// string
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

  int N, M, result = 0;
  string S;

  cin >> N >> M;
  cin >> S;

  int k = 2 * N + 1;

  string P;
  for (int i = 0; i < k; i++) {
    if (i % 2 == 0)
      P.push_back('I');
    else if (i % 2 == 1)
      P.push_back('O');
  }

  for (int i = 0; i < S.size() - 2; i++) {
    if (S.find(P, i) == i) result++;
  }

  cout << result;
}