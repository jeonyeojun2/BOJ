// 1260
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string S;
  cin >> S;

  int arr[26];
  fill(arr, arr + 26, -1);

  int count = 0;
  for (char s : S) {
    if (arr[s - 'a'] == -1) {
      arr[int(s - 'a')] = count;
    }
    count++;
  }

  for (int i = 0; i < 26; i++) {
    cout << arr[i] << " ";
  }
}