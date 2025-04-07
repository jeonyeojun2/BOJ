// 2798
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

    int N, M, max = 0; // 0 1 2 3 4 5 6 7
    cin >> N >> M;

    vector<int> v(N);

    for (int i = 0; i < N; i++)
        cin >> v[i];

    for (int i = 0; i <= N - 2; i++)
    {
        for (int j = i + 1; j <= N - 1; j++)
        {
            for (int k = j + 1; k <= N; k++)
            {
                if ((v[i] + v[j] + v[k] <= M) && (v[i] + v[j] + v[k] >= max))
                {
                    max = v[i] + v[j] + v[k];
                }
            }
        }
    }
    cout << max;
}