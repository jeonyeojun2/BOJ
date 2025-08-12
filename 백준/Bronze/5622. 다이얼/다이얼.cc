// 5622 : 다이얼
// 문자열
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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string word;
  cin >> word;

  int time = 0;

  for (int i = 0; i < word.size(); i++) {
    if (word[i] == 'A' || word[i] == 'B' || word[i] == 'C')
      time += 2;
    else if (word[i] == 'D' || word[i] == 'E' || word[i] == 'F')
      time += 3;
    else if (word[i] == 'G' || word[i] == 'H' || word[i] == 'I')
      time += 4;
    else if (word[i] == 'J' || word[i] == 'K' || word[i] == 'L')
      time += 5;
    else if (word[i] == 'M' || word[i] == 'N' || word[i] == 'O')
      time += 6;
    else if (word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' ||
             word[i] == 'S')
      time += 7;
    else if (word[i] == 'T' || word[i] == 'U' || word[i] == 'V')
      time += 8;
    else if (word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' ||
             word[i] == 'Z')
      time += 9;
  }

  cout << time + word.size();
}