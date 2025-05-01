// 1181
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

bool compare(const string& a, const string& b) {
  if (a.length() == b.length())  // 길이가 같다면 사전순
    return a < b;
  return a.length() < b.length();  // 길이가 다르면 길이순
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  set<string> wordSet;

  for (int i = 0; i < N; i++) {
    string word;
    cin >> word;
    wordSet.insert(word);
  }

  vector<string> words(wordSet.begin(), wordSet.end());
  sort(words.begin(), words.end(), compare);

  for (const auto& w : words) {
    cout << w << "\n";
  }
}