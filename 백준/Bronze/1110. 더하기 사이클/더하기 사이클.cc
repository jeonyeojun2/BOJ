#include <iostream>

using namespace std;

int main() {

	int N;
	int temp;
	cin >> N;

	if (N < 10) N *= 10; // 10보다 작은 수 0을 붙여 두 자리 수 만들기

	int count = 0;
	temp = N;

	while (1) {
		count++;
		temp = temp % 10 * 10 + (temp / 10 + temp % 10) % 10;

		if (temp == N) {
			break;
		}
	}

	cout << count;

	return 0;
}