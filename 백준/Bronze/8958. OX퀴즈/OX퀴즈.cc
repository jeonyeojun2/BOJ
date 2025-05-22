// 8958
#include <algorithm>
#include <cmath>
#include <cstring>
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

  int N;
  cin >> N;

  while (N--) {
    string s;
    cin >> s;

    int total = 0, score = 0;

    for (char c : s) {
      if (c != 'O')
        score = 0;
      else {
        score++;
        total += score;
      }
    }
    cout << total << "\n";
  }
}