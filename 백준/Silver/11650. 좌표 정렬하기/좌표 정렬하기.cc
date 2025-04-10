// 11650
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

    int N;
    cin >> N;

    vector<pair<int, int>> points(N);

    for (int i = 0; i < N; i++)
    {
        cin >> points[i].first >> points[i].second;
    }

    sort(points.begin(), points.end());

    for (int i = 0; i < N; i++)
    {
        cout << points[i].first << " " << points[i].second << "\n";
    }
}