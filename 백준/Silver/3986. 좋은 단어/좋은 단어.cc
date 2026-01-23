#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, ans = 0;
    cin >> N;

    while (N--) {
        stack<char> st;

        string S;
        cin >> S;

        for (char ch : S) {
            if (!st.empty()) {
                if (st.top() == ch) {
                    st.pop();
                } else if (st.top() != ch) {
                    st.push(ch);
                }
            } else { // 스택 비어있음
                st.push(ch);
            }
        }

        if (st.empty())
            ans++;
    }

    cout << ans;
}