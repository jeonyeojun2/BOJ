// 1157
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

    int cnt[26] = {
        0,
    };
    int max = -1;
    char max_char;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        char c = toupper(s[i]);

        cnt[c - 'A']++;

        if (cnt[c - 'A'] > max)
        {
            max = cnt[c - 'A'];
            max_char = c;
        }
    }

    int check = 0;

    for (int i = 0; i < 26; i++)
    {
        if (max == cnt[i])
            check++;
    }

    if (check > 1)
        cout << "?";
    else
        cout << max_char;
}