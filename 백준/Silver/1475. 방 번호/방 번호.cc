#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int result = 0;

    string S;
    cin >> S;

    vector<int> numbers(10, 0);

    for (int i = 0; i < S.size(); i++) {
        numbers[S[i] - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9)
            continue;
        result = max(result, numbers[i]);
    }

    result = max(result, ((numbers[6] + numbers[9] + 1) / 2));

    cout << result;
}