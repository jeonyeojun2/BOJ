#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[26] = {0, };
    string S;

    cin >> S;

    for (char ch : S) {
        arr[ch - 97]++;
    }

    for (int k : arr)
        cout << k << ' ';
}