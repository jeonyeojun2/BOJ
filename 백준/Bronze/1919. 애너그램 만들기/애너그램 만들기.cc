#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int result = 0;
    int word[2][26] = {};

    for (int i = 0; i < 2; i++) {
        string S;
        cin >> S;
        for (char ch : S)
            word[i][ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        result += abs(word[0][i] - word[1][i]);
    }

    cout << result;
}