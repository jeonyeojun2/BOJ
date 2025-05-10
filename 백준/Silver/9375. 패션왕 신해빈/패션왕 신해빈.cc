// 9375
#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;

    unordered_map<string, int> clothes;

    for (int i = 0; i < n; i++) {
      string name, type;
      cin >> name >> type;
      clothes[type]++;
    }

    int result = 1;
    for (auto& item : clothes) {
      result *= item.second + 1;
    }

    cout << result - 1 << "\n";
  }
}