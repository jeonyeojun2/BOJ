#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    while (N--) {
        int arr1[26] = {};
        int arr2[26] = {};
        bool k = true;

        string s1, s2;
        cin >> s1 >> s2;

        for (char ch : s1)
            arr1[ch - 'a']++;
        for (char ch : s2)
            arr2[ch - 'a']++;

        for (int i = 0; i < 26; i++) {
            if (arr1[i] != arr2[i]) {
                k = false;
                break;
            }
        }

        if (k)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
}