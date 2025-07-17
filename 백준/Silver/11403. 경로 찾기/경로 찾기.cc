// 11403
// dfs, 플로이드-워셜
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
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

int N;
vector<int> graph[101];
bool visited[101];

void dfs(int k) {
  for (int next : graph[k]) {
    if (!visited[next]) {
      visited[next] = true;
      dfs(next);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int x;
      cin >> x;
      if (x == 1) graph[i].push_back(j);
    }
  }

  for (int i = 0; i < N; i++) {
    dfs(i);

    for (int j = 0; j < N; j++) {
      cout << visited[j] << " ";
      visited[j] = false;
    }

    cout << "\n";
  }
}

/*

int N; int path[100][100];

int main() {
  cin >> N;

  입력받기
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> path[i][j];
    }
  }

  플로이드-워셜 알고리즘
  for (int k = 0; k < N; k++) {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (path[i][k] && path[k][j]) path[i][j] = 1;
      }
    }
  }

  결과 출력
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << path[i][j] << " ";
    }
    cout << "\n";
  }
}

*/