// 10988
#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, s_reverse;
    cin >> s;

    s_reverse = s;
    reverse(s_reverse.begin(), s_reverse.end());

    if (s == s_reverse)
        cout << 1;
    else
        cout << 0;
}
