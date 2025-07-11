// 18870
/*
입력:   2 4 -10 4 -9
정렬:  -10 -9 2 4
매핑:  -10→0, -9→1, 2→2, 4→3
결과:   2 3 0 3 1
*/
#include <algorithm>
#include <climits>
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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> origin(n);
  vector<int> sorted;

  for (int i = 0; i < n; i++) {
    cin >> origin[i];
    sorted.push_back(origin[i]);
  }

  sort(sorted.begin(), sorted.end());  // 정렬
  sorted.erase(unique(sorted.begin(), sorted.end()),
               sorted.end());  // 중복 제거

  // 매핑
  unordered_map<int, int> coord_map;
  for (int i = 0; i < sorted.size(); i++) {
    coord_map[sorted[i]] = i;
  }

  // 출력
  for (int i = 0; i < n; i++) {
    cout << coord_map[origin[i]] << " ";
  }
}