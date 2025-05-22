// 10250
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

  int T;
  cin >> T;

  while (T--) {
    int H, W, N;
    cin >> H >> W >> N;

    int floor = (N - 1) % H + 1;  // 층수
    int room = (N - 1) / H + 1;   // 호수

    // 방 번호 출력 (YYXX 형식, XX는 두 자리)
    cout << floor << setfill('0') << setw(2) << room << endl;
  }
}