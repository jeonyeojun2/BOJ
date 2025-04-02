// 1920
#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N;

    unordered_set<int> numbers;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        numbers.insert(num);
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int num; cin >> num;
        cout << (numbers.count(num) ? 1 : 0) << "\n";
    }
}