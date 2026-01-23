#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    deque<int> dq;
    for (int i = 1; i <= N; i++)
        dq.push_back(i);

    int ans = 0;

    while (M--) {
        int x;
        cin >> x;

        // x의 현재 위치(0-index) 찾기
        int idx = 0;
        for (int i = 0; i < (int)dq.size(); i++) {
            if (dq[i] == x) {
                idx = i;
                break;
            }
        }

        int left = idx;                   // 왼쪽 회전 횟수
        int right = (int)dq.size() - idx; //  오른쪽 회전 횟수

        // 더 적은 회전 선택
        if (left <= right) {
            ans += left;
            while (left--) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            ans += right;
            while (right--) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }

        // 이제 front가 x이므로 뽑기(연산 1은 카운트 X)
        dq.pop_front();
    }

    cout << ans;
}