#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    cin >> a >> b;
    long long low = min(a, b);
    long long high = max(a, b);

    long long count = high - low - 1;

    if (count <= 0) {
        cout << "0";
        return 0;
    }

    cout << count << '\n';
    for (long long i = low + 1; i < high; i++)
        cout << i << ' ';
}