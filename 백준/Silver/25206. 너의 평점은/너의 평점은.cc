// 25206 : 너의 평점은
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

  double total_hak = 0;
  double sum = 0;

  for (int i = 0; i < 20; i++) {
    string subject, grade;
    double hak;

    cin >> subject >> hak >> grade;

    if (grade != "P") total_hak += hak;

    if (grade == "A+")
      sum += hak * 4.5;
    else if (grade == "A0")
      sum += hak * 4.0;
    else if (grade == "B+")
      sum += hak * 3.5;
    else if (grade == "B0")
      sum += hak * 3.0;
    else if (grade == "C+")
      sum += hak * 2.5;
    else if (grade == "C0")
      sum += hak * 2.0;
    else if (grade == "D+")
      sum += hak * 1.5;
    else if (grade == "D0")
      sum += hak * 1.0;
    else if (grade == "F")
      sum += hak * 0.0;
  }

  cout << sum / total_hak;
}