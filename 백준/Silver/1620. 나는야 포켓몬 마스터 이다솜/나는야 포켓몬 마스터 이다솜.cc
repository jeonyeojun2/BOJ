#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;

    unordered_map<string, int> name_to_number; // 이름(문자) -> 번호(숫자)
    vector<string> number_to_name(N + 1);      // 번호(숫자) -> 이름(문자)

    for (int i = 0; i < N; i++) // 포켓몬 이름 저장
    {
        string name;
        cin >> name;

        name_to_number[name] = i;
        number_to_name[i + 1] = name;
    }

    for (int i = 0; i < M; i++)
    {
        string query;
        cin >> query;

        if (isdigit(query[0])) // 포켓몬 번호가 주어졌을 때
        {
            int num = stoi(query); // 정수로 변환
            cout << number_to_name[num] << "\n";
        }
        else // 포켓몬 이름이 주어졌을 때
        {
            cout << name_to_number[query] + 1 << "\n";
        }
    }
}