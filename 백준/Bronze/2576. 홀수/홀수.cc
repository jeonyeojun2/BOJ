#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0, min = INT_MAX;

    for (int i = 0; i < 7; i++) {
        int k;
        cin >> k;
        if (k % 2 == 1) {
            if (k < min)
                min = k;
            sum += k;
        }
    }

    if (sum == 0)
        cout << "-1";
    else {
        cout << sum << "\n" << min;
    }
}