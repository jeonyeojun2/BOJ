// 2164
#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        q.push(i + 1);
    }

    while (q.size() != 1)
    {
        q.pop();
        int k = q.front();
        q.pop();
        q.push(k);
    }

    cout << q.front();
}