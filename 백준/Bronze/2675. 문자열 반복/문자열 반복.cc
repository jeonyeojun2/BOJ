// 2675
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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int R;
    string S;
    cin >> R >> S;

    for (int i = 0; i < S.size(); i++) {
      for (int j = 0; j < R; j++) {
        cout << S[i];
      }
    }
    cout << "\n";
  }
}