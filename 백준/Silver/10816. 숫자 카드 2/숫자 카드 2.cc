// 10816
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

    unordered_map<int, int> map;
    int N, M, card;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> card;
        map[card]++;
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> card;
        cout << map[card] << " ";
    }
}