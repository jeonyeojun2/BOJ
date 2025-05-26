// 2920
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

  vector<int> notes(8);

  // 입력 받기
  for (int i = 0; i < 8; ++i) {
    cin >> notes[i];
  }

  // ascending과 descending 비교용 배열
  vector<int> ascending = {1, 2, 3, 4, 5, 6, 7, 8};
  vector<int> descending = {8, 7, 6, 5, 4, 3, 2, 1};

  if (notes == ascending) {
    cout << "ascending" << endl;
  } else if (notes == descending) {
    cout << "descending" << endl;
  } else {
    cout << "mixed" << endl;
  }

}