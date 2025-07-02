#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> people(n); // (몸무게, 키) 저장

    for (int i = 0; i < n; i++) {
        cin >> people[i].first >> people[i].second;
    }

    for (int i = 0; i < n; i++) {
        int rank = 1; // 자기 자신은 항상 등수 1에서 시작

        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            // 상대방이 몸무게와 키 둘 다 큰 경우
            if (people[j].first > people[i].first && people[j].second > people[i].second) {
                rank++;
            }
        }

        cout << rank << ' ';
    }

    return 0;
}
