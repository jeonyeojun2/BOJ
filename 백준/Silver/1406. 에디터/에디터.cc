#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    list<char> L;
    string S;
    cin >> S;

    for (auto c : S)
        L.push_back(c);

    auto cursor = L.end();

    int M;
    cin >> M;

    while (M--) {
        char op;
        cin >> op;

        if (op == 'P') {
            char add;
            cin >> add;
            L.insert(cursor, add);
        } else if (op == 'L') {
            if (cursor != L.begin())
                cursor--;
        } else if (op == 'D') {
            if (cursor != L.end())
                cursor++;
        } else { // 'B'
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }

    for (auto c : L)
        cout << c;
}