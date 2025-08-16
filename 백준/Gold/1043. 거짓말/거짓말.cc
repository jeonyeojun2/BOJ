// 1043 : 거짓말
// union-find
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

vector<int> parent;

// 어떤 원소 x가 주어질 때 이 원소가 속한 집합(루트 노드)을 반환
int find(int x) {
  if (parent[x] == x) return x;
  return parent[x] = find(parent[x]);
}

// 두 원소 a, b가 주어질 때 이들이 속한 두 집합을 하나로 합침
void unite(int a, int b) {
  a = find(a);
  b = find(b);
  if (a != b) parent[b] = a;  // 같은 집합으로 묶기
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  parent.resize(N + 1);

  for (int i = 1; i <= N; i++) parent[i] = i;

  int T;
  cin >> T;
  vector<int> truth(T);
  for (int i = 0; i < T; i++) cin >> truth[i];

  vector<vector<int>> parties(M);

  for (int i = 0; i < M; i++) {
    int k;
    cin >> k;
    parties[i].resize(k);

    for (int j = 0; j < k; j++) {
      cin >> parties[i][j];
    }

    for (int j = 1; j < k; j++) {
      unite(parties[i][0], parties[i][j]);
    }
  }

  // 진실 아는 루트 표시
  vector<bool> truthRoot(N + 1, false);
  for (int t : truth) {
    truthRoot[find(t)] = true;
  }

  // 파티마다 거짓말 가능 여부 체크
  int ans = 0;
  for (auto p : parties) {
    bool canLie = true;

    for (int person : p) {
      if (truthRoot[find(person)]) {
        canLie = false;
        break;
      }
    }

    if (canLie) ans++;
  }

  cout << ans;
}