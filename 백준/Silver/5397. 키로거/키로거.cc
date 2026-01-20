#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;

    cin >> T;

    while (T--) {
        list<char> L = {};
        auto t = L.begin();
        string S;
        cin >> S;

        for (char ch : S) {
            if (ch == '<') {
                if (t != L.begin())
                    t--;
            } else if (ch == '>') {
                if (t != L.end())
                    t++;
            } else if (ch == '-') {
                if (t != L.begin()) {
                    t--;
                    t = L.erase(t);
                }
            } else {
                L.insert(t, ch);
            }
        }

        for (auto i : L)
            cout << i;
        cout << '\n';
    }
}