// 2751
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
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

  vector<int> numbers(N);

  for (int i = 0; i < N; i++) {
    cin >> numbers[i];
  }

  sort(numbers.begin(), numbers.end());

  for (int i = 0; i < N; i++) {
    cout << numbers[i] << "\n";
  }
}
