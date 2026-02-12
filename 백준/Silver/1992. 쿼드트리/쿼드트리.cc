#include <bits/stdc++.h>

using namespace std;

int N;
const int MAX = 64;
int arr[MAX][MAX];

void func(int n, int y, int x) {
    if (n == 1) {
        cout << arr[y][x];
        return;
    }

    bool zero = true, one = true;

    for (int i = y; i < y + n; i++) {
        for (int j = x; j < x + n; j++) {
            if (arr[i][j])
                zero = false;
            else
                one = false;
        }
    }

    if (zero)
        cout << 0;
    else if (one)
        cout << 1;
    else {
        cout << "(";
        func(n / 2, y, x);
        func(n / 2, y, x + n / 2);
        func(n / 2, y + n / 2, x);
        func(n / 2, y + n / 2, x + n / 2);
        cout << ")";
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < N; j++) {
            arr[i][j] = str[j] - '0';
        }
    }

    func(N, 0, 0);
}