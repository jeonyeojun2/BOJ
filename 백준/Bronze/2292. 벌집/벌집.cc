// 2292
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

  int N;
  cin >> N;

  int room = 1;   // 현재 방 번호 최대값
  int layer = 1;  // 층 수 (1부터 시작)

  while (room < N) {
    room += 6 * layer;  // 다음 층에서 방이 6개, 12개, 18개씩 증가
    layer++;
  }

  cout << layer;

}