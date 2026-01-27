#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    // 나이트 8방향 이동
    const int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    const int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

    while (T--) {
        int L;
        cin >> L;

        int sx, sy;
        cin >> sx >> sy;
        int tx, ty;
        cin >> tx >> ty;

        if (sx == tx && sy == ty) {
            cout << 0 << "\n";
            continue;
        }

        vector<vector<int>> dist(L, vector<int>(L, -1));
        queue<pair<int, int>> Q;
        Q.push({sx, sy});
        dist[sx][sy] = 0;

        while (!Q.empty()) {
            auto cur = Q.front();
            Q.pop();
            int cx = cur.first;
            int cy = cur.second;

            for (int dir = 0; dir < 8; dir++) {
                int nx = cx + dx[dir];
                int ny = cy + dy[dir];

                if (nx < 0 || ny < 0 || nx >= L || ny >= L) // 범위 밖
                    continue;
                if (dist[nx][ny] != -1) // 이미 방문했음
                    continue;

                dist[nx][ny] = dist[cx][cy] + 1;

                if (nx == tx && ny == ty) {
                    cout << dist[nx][ny] << '\n';
                    while (!Q.empty())
                        Q.pop();
                    break;
                }

                Q.push({nx, ny});
            }
        }
    }
}