#include <bits/stdc++.h>

using namespace std;

int n, x;
int a[1000001];
bool occur[1000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] < x && occur[x - a[i]])
            ans++;
        else
            occur[a[i]] = true;
    }

    cout << ans;
}