// 11047
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

  vector<pair<int, string>> members;

  for (int i = 0; i < N; i++) {
    int age;
    string name;
    cin >> age >> name;
    members.push_back({age, name});
  }

  stable_sort(members.begin(), members.end(),
              [](const pair<int, string> &a, const pair<int, string> &b) {
                return a.first < b.first;
              });

  for (const auto &member : members) {
    cout << member.first << " " << member.second << "\n";
  }
}
