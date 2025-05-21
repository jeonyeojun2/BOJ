#include <iostream>
#include <string>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int result = A * B * C;

    // 각 숫자의 등장 횟수를 저장할 배열
    int count[10] = {0};

    // 곱한 결과를 문자열로 변환
    string str = to_string(result);

    // 각 숫자 세기
    for (char digit : str) {
        count[digit - '0']++;
    }

    // 출력
    for (int i = 0; i < 10; i++) {
        cout << count[i] << '\n';
    }

    return 0;
}