// 1764
#include <algorithm>
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

  int N, M;
  cin >> N >> M;

  unordered_set<string> unheard;
  vector<string> result;

  for (int i = 0; i < N; i++) {
    string name;
    cin >> name;
    unheard.insert(name);
  }

  for (int i = 0; i < M; i++) {
    string name;
    cin >> name;
    if (unheard.count(name)) result.push_back(name);
  }

  sort(result.begin(), result.end());

  cout << result.size() << "\n";

  for (const string& name : result) {
    cout << name << "\n";
  }
}