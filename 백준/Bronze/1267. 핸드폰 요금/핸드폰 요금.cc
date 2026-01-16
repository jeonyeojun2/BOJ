#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, k, Y = 0, M = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> k;
        Y += (k / 30 + 1) * 10;
        M += (k / 60 + 1) * 15;
    }

    if (Y > M)
        cout << "M " << M;
    else if (Y < M)
        cout << "Y " << Y;
    else
        cout << "Y M " << Y;
}