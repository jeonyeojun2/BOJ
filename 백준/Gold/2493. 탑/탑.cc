// 2493
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<int> heights(N);
    vector<int> result(N, 0);
    stack<pair<int, int>> s; // (탑의 높이, 탑 인덱스)

    for (int i = 0; i < N; i++)
    {
        cin >> heights[i];

        while (!s.empty() && s.top().first < heights[i])
        {
            s.pop(); // 지금 탑보다 낮은 탑은 수신 X
        }

        if (!s.empty())
        {
            result[i] = s.top().second; // 가장 가까운 높은 탑의 인덱스
        }

        s.push({heights[i], i + 1});
    }

    for (int i = 0; i < N; i++)
    {
        cout << result[i] << " ";
    }
}