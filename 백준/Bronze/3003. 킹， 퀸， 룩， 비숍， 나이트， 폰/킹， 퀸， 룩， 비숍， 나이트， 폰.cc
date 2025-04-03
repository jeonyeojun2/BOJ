// 3033
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

    vector<int> input(6);
    vector<int> answer = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << answer[i] - input[i] << " ";
    }
}
