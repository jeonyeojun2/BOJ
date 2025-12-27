#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    int answer = 1;
    int start_index = 1, end_index = 1, sum = 1;

    while (start_index != N) {
        if (sum == N) {
            answer++;
            sum += (++end_index);
        }
        else if (sum > N) {
            sum -= start_index;
            start_index++;
        }
        else if (sum < N) {
            sum += (++end_index);
        }
    }

    cout << answer;
}