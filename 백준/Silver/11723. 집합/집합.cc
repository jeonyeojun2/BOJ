// 11723
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

    int M;
    cin >> M;

    int S = 0;
    while (M--)
    {
        string cmd;
        int x;
        cin >> cmd;

        if (cmd == "add")
        {
            cin >> x;
            S |= (1 << (x - 1)); // 1 << (x - 1)은 x번째 비트를 1로 만듬
        }
        else if (cmd == "remove")
        {
            cin >> x;
            S &= ~(1 << (x - 1)); // x번째 비트만 0으로 만듬
        }
        else if (cmd == "check")
        {
            cin >> x;
            cout << ((S & (1 << (x - 1))) ? 1 : 0) << "\n";
        }
        else if (cmd == "toggle")
        {
            cin >> x;
            S ^= (1 << (x - 1)); // 비트 토글
        }
        else if (cmd == "all")
        {
            S = (1 << 20) - 1;
        }
        else if (cmd == "empty")
        {
            S = 0;
        }
    }
}