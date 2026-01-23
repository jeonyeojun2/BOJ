#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    stack<char> st;
    long long ans = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            st.push('(');
        else { // )
            st.pop();

            if (i > 0 && s[i - 1] == '(') { // 레이저
                ans += (long long)st.size();
            } else { // 막대기 끝
                ans++;
            }
        }
    }

    cout << ans;
}