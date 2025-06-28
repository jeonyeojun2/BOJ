// 10989
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

const int MAX = 10001;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int count[MAX] = {0};

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    count[num]++;
  }

  for (int i = 0; i < MAX; i++) {
    while (count[i]--) {
      cout << i << "\n";
    }
  }
}