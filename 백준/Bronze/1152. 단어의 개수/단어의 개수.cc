// 1152
#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int count = 1;
    string s;
    getline(cin, s);

    if (s.size() == 1 && s[0] == ' ')
    {
        cout << 0;
        return 0;
    }

    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == ' ')
            count++;
    }

    cout << count;
}