#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, result = 0;
    cin >> N >> K;

    int arr[2][6] = {};

    for (int i = 0; i < N; i++) {
        int s, y;
        cin >> s >> y;
        arr[s][y - 1]++;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            if (arr[i][j] > 0) {
                result += (arr[i][j] + K - 1) / K;
            }
        }
    }

    cout << result;
}