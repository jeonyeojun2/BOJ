// 1978
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

    int N, cnt = 0;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; i++)
        cin >> v[i];

    for (int i = 0; i < N; i++)
    {
        int is_prime = 0;
        for (int j = 1; j <= v[i]; j++)
        {
            if (v[i] % j == 0)
            {
                is_prime++;
            }
        }

        if (is_prime == 2)
        {
            cnt++;
        }
    }

    cout << cnt;
}