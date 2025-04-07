// 4153
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

    while (1)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) // 종료
        {
            return 0;
        }

        int sides[3] = {a, b, c};
        sort(sides, sides + 3);

        if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2])
            cout << "right\n";
        else
            cout << "wrong\n";
    }
}