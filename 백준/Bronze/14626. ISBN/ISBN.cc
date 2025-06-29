// 14626
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

  string isbn;
  cin >> isbn;

  int damaged_index = -1;
  int checksum = 0;

  for (int i = 0; i < 12; i++) {
    if (isbn[i] == '*') {
      damaged_index = i;
      continue;
    }

    int digit = isbn[i] - '0';
    if (i % 2 == 0)
      checksum += digit;
    else
      checksum += 3 * digit;
  }

  int last_digit = isbn[12] - '0';

  for (int x = 0; x <= 9; x++) {
    int temp_sum = checksum;

    if (damaged_index % 2 == 0)
      temp_sum += x;
    else
      temp_sum += 3 * x;

    int m = (10 - (temp_sum % 10)) % 10;

    if (m == last_digit) {
      cout << x;
      break;
    }
  }
}