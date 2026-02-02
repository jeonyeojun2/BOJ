#include <bits/stdc++.h>

using namespace std;

long long pow(long long a, long long b, long long m) {
    if (b == 1)
        return a % m;

    long long val = pow(a, b / 2, m);
    val = val * val % m;
    if (b % 2 == 0)
        return val;
    return val * a % m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    cin >> a >> b >> c;

    cout << pow(a, b, c);
}