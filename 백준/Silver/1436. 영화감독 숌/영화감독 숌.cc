// 1436
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int result = 665;
  string temp;

  for (int i = 0; i < n; i++) {
    while (1) {
      result++;
      temp = to_string(result);
      if (temp.find("666") != -1) break;
    }
  }

  cout << result;
}