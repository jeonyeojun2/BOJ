// 30802
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

    int N, T, P;
    int result_p = 0;
    vector<int> v(6);

    cin >> N;

    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }

    cin >> T >> P;

    for (int i = 0; i < 6; i++)
    {
        if (v[i] % T == 0)
        {
            result_p += v[i] / T;
        }
        else
        {
            result_p += v[i] / T + 1;
        }
    }

    cout << result_p << "\n";
    cout << (N / P) << " " << (N % P);
}