#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {

        int w, h;
        cin >> w >> h;

        vector<string> board(h);
        for (int i = 0; i < h; i++)
            cin >> board[i];

        vector<vector<int>> fire(h, vector<int>(w, -1)); // 불
        vector<vector<int>> dist(h, vector<int>(w, -1)); // 상근이
        queue<pair<int, int>> qf, qs;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (board[i][j] == '*') {
                    qf.push({i, j});
                    fire[i][j] = 0;
                } else if (board[i][j] == '@') {
                    qs.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }

        // 1) 불 BFS: 각 칸에 불이 도착하는 최소 시간
        while (!qf.empty()) {
            auto cur = qf.front();
            qf.pop();
            int cx = cur.first;
            int cy = cur.second;

            for (int dir = 0; dir < 4; dir++) {
                int nx = cx + dx[dir];
                int ny = cy + dy[dir];

                if (nx < 0 || ny < 0 || nx >= h || ny >= w) // 범위 벗어남
                    continue;

                if (board[nx][ny] == '#') // 벽에 부딪힘
                    continue;

                if (fire[nx][ny] != -1) // 이미 방문
                    continue;

                fire[nx][ny] = fire[cx][cy] + 1;

                qf.push({nx, ny});
            }
        }

        // 2) 상근 BFS
        bool escaped = false;
        while (!qs.empty() && !escaped) {
            auto cur = qs.front();
            qs.pop();
            int cx = cur.first;
            int cy = cur.second;

            for (int dir = 0; dir < 4; dir++) {
                int nx = cx + dx[dir];
                int ny = cy + dy[dir];

                if (nx < 0 || ny < 0 || nx >= h || ny >= w) { // 탈출
                    cout << dist[cx][cy] + 1 << '\n';
                    escaped = true;
                    break;
                }

                if (board[nx][ny] == '#')
                    continue;
                if (dist[nx][ny] != -1)
                    continue;

                int nt = dist[cx][cy] + 1;

                // 불이 (nx,ny)에 도착하는 시간이 있고,
                // 그 시간 <= 내가 도착시간 이면 못 감
                if (fire[nx][ny] != -1 && fire[nx][ny] <= nt)
                    continue;

                dist[nx][ny] = nt;

                qs.push({nx, ny});
            }
        }

        if (!escaped)
            cout << "IMPOSSIBLE\n";
    }
}