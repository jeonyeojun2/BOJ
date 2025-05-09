// 17219
#include <algorithm>
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

  int N, M;
  cin >> N >> M;

  unordered_map<string, string> m;

  for (int i = 0; i < N; i++) {
    string site, password;
    cin >> site >> password;
    m[site] = password;
  }

  for (int i = 0; i < M; i++) {
    string site;
    cin >> site;
    cout << m[site] << "\n";
  }
}