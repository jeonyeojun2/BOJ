// 10811
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

    int N, M;
    cin >> N >> M;

    vector<int> v(N);

    for (int i = 0; i < N; i++)
    {
        v[i] = i + 1;
    }

    for (int k = 0; k < M; k++)
    {
        int i, j;
        cin >> i >> j;

        reverse(v.begin() + (i - 1), v.begin() + j);
    }

    for (int num : v)
    {
        cout << num << " ";
    }
}