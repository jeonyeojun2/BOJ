// 1541
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

  string expr;
  cin >> expr;

  stringstream ss(expr);
  string segment;
  int result = 0;
  bool first = true;

  // '-'를 기준으로 나눔
  while (getline(ss, segment, '-')) {
    int temp = 0;
    stringstream addStream(segment);
    string num;

    // '+'를 기준으로 나눔
    while (getline(addStream, num, '+')) {
      temp += stoi(num);
    }

    if (first) {
      result += temp;
      first = false;
    } else {
      result -= temp;
    }
  }

  cout << result;
}