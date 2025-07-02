// 7568
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

  int array[N][3];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> array[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    int count = 0;
    int temp_w = array[i][0];
    int temp_h = array[i][1];

    for (int j = 0; j < N; j++) {
      if (temp_w < array[j][0] && temp_h < array[j][1]) count++;
    }

    array[i][2] = count + 1;
  }

  for (int i = 0; i < N - 1; i++) {
    cout << array[i][2] << " ";
  }
  cout << array[N - 1][2];
}