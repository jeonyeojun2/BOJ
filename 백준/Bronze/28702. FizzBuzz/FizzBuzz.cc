// 28702
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

void print(int N) {
  if (N % 15 == 0) {
    cout << "FizzBuzz" << "\n";
  } else if (N % 3 == 0) {
    cout << "Fizz" << "\n";
  } else if (N % 5 == 0) {
    cout << "Buzz" << "\n";
  } else {
    cout << N << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string str1, str2, str3;

  cin >> str1;
  cin >> str2;
  cin >> str3;

  if (str3 != "FizzBuzz" && str3 != "Fizz" && str3 != "Buzz") {
    print(stoi(str3) + 1);
  } else if (str2 != "FizzBuzz" && str2 != "Fizz" && str2 != "Buzz") {
    print(stoi(str2) + 2);
  } else {
    print(stoi(str1) + 3);
  }
}