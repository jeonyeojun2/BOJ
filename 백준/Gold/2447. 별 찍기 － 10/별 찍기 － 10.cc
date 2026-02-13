#include <bits/stdc++.h>

using namespace std;

int N;
char board[2300][2300];

void func(int n, int x, int y) {

    if (n == 1) {
        board[x][y] = '*';
        return;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1)
                continue;
            func(n / 3, x + n / 3 * i, y + n / 3 * j);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = ' ';
        }
    }

    func(N, 0, 0);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j];
        }
        cout << "\n";
    }
}