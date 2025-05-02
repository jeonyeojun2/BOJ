// 1003
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

int zeroCount[41];
int oneCount[41];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  zeroCount[0] = 1;
  oneCount[0] = 0;
  zeroCount[1] = 0;
  oneCount[1] = 1;

  for (int i = 2; i <= 40; i++) {
    zeroCount[i] = zeroCount[i - 1] + zeroCount[i - 2];
    oneCount[i] = oneCount[i - 1] + oneCount[i - 2];
  }

  while (T--) {
    int N;
    cin >> N;

    cout << zeroCount[N] << " " << oneCount[N] << "\n";
  }
}