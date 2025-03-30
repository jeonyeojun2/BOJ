#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    double arr[1001];
    double all;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
    {
        all += (arr[i] / arr[N-1]) * 100;
    }
    cout << all/N;
}