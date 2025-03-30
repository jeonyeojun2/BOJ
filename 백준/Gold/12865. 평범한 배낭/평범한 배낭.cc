#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> weight(N + 1), value(K + 1);
    for (int i = 0; i < N; i++)
    {
        cin >> weight[i + 1] >> value[i + 1];
    }

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (weight[i] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
            }
        }
    }
    cout << dp[N][K] << endl;
    return 0;
}