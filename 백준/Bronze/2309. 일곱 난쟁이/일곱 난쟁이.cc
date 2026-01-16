#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int total = 0, a, b;
    vector<int> v(9);

    for (int i = 0; i < 9; i++) {
        cin >> v[i];
        total += v[i];
    }

    sort(v.begin(), v.end());

    int target = total - 100;

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (v[i] + v[j] == target) {
                a = i;
                b = j;
                break;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        if (i != a && i != b)
            cout << v[i] << '\n';
    }
}