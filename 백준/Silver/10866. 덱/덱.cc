#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    deque<int> dq;

    while (N--) {
        string s;
        cin >> s;

        if (s == "push_front") {
            int k;
            cin >> k;
            dq.push_front(k);
        } else if (s == "push_back") {
            int k;
            cin >> k;
            dq.push_back(k);
        } else if (s == "pop_front") {
            if (dq.empty())
                cout << -1 << '\n';
            else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        } else if (s == "pop_back") {
            if (dq.empty())
                cout << -1 << '\n';
            else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        } else if (s == "size") {
            cout << dq.size() << '\n';
        } else if (s == "empty") {
            if (dq.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        } else if (s == "front") {
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.front() << '\n';
        } else if (s == "back") {
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.back() << '\n';
        }
    }
}