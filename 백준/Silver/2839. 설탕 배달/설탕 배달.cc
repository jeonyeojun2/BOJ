#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int answer = -1;

    for (int five = N / 5; five >= 0; five--)
    {
        int remain = N - (five * 5);

        if (remain % 3 == 0)
        {
            int three = remain / 3;
            answer = five + three;
            break;
        }
    }
    cout << answer;
}