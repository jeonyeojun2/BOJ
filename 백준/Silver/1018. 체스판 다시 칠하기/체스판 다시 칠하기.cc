// 1018
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

int countRepaints(const vector<string>& board, int row, int col) {
  int count1 = 0; // 시작이 'W'
  int count2 = 0; // 시작이 'B'
  char color1, color2;

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      color1 = ((i + j) % 2 == 0) ? 'W' : 'B';
      color2 = ((i + j) % 2 == 0) ? 'B' : 'W';

      if (board[row + i][col + j] != color1) count1++;
      if (board[row + i][col + j] != color2) count2++;
    }
  }

  return min(count1, count2);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  vector<string> board(N);
  for (int i = 0; i < N; i++) {
    cin >> board[i];
  }

  int minRepaint = 64;
  for (int i = 0; i <= N - 8; i++) {
    for (int j = 0; j <= M - 8; j++) {
      minRepaint = min(minRepaint, countRepaints(board, i, j));
    }
  }

  cout << minRepaint << "\n";
}