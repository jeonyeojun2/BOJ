// 1991 : 트리 순회
// 트리, 재귀
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

struct Node {
  char left;
  char right;
};

Node tree[26];

void preorder(char node) {  // 전위 순회 : (루트) (왼쪽 자식) (오른쪽 자식)
  if (node == '.') return;
  cout << node;
  preorder(tree[node - 'A'].left);
  preorder(tree[node - 'A'].right);
}

void inorder(char node) {  // 중위 순회 : (왼쪽 자식) (루트) (오른쪽 자식)
  if (node == '.') return;
  inorder(tree[node - 'A'].left);
  cout << node;
  inorder(tree[node - 'A'].right);
}

void postorder(char node) {  // 후위 순회 : (왼쪽 자식) (오른쪽 자식) (루트)
  if (node == '.') return;
  postorder(tree[node - 'A'].left);
  postorder(tree[node - 'A'].right);
  cout << node;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  // 입력
  for (int i = 0; i < N; i++) {
    char root, left, right;
    cin >> root >> left >> right;
    tree[root - 'A'] = {left, right};
  }

  preorder('A');
  cout << "\n";
  inorder('A');
  cout << "\n";
  postorder('A');
}