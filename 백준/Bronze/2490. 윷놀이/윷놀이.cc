#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 3;

    while (n--) {
        vector<int> a(3);
        int count = 0;

        cin >> a[0] >> a[1] >> a[2] >> a[3];
        for (int i = 0; i < 4; i++) {
            if (a[i] == 0)
                count++;
        }

        if (count == 0)
            cout << "E\n";
        else if (count == 1)
            cout << "A\n";
        else if (count == 2)
            cout << "B\n";
        else if (count == 3)
            cout << "C\n";
        else if (count == 4)
            cout << "D\n";
    }
}