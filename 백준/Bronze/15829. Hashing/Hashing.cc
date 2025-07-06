// 15829
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

const int r = 31;
const int M = 1234567891;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  string str;
  cin >> n >> str;

  long long hash = 0;
  long long power = 1;

  for (int i = 0; i < n; i++) {
    int value = str[i] - 'a' + 1;

    hash = (hash + value * power) % M;
    power = (power * r) % M;
  }

  cout << hash;
}