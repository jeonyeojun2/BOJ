#include <bits/stdc++.h>

using namespace std;

int l, r, c;
const int MX = 31;
int dx[6] = {-1, 1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dh[6] = {0, 0, 0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (1) {
        cin >> l >> r >> c;

        if (l == 0 && r == 0 && c == 0)
            break;

        queue<tuple<int, int, int>> Q;
        char board[MX][MX][MX];
        int dist[MX][MX][MX];
        bool isEscape = false;

        for (int i = 0; i < l; i++) {
            for (int j = 0; j < r; j++) {
                fill(dist[i][j], dist[i][j] + c, 0);
            }
        }

        for (int i = 0; i < l; i++) {
            for (int j = 0; j < r; j++) {
                for (int k = 0; k < c; k++) {
                    cin >> board[i][j][k];
                    if (board[i][j][k] == 'S')
                        Q.push({i, j, k});
                    else if (board[i][j][k] == '.')
                        dist[i][j][k] = -1;
                }
            }
        }

        while (!Q.empty()) {
            if (isEscape)
                break;

            auto cur = Q.front();
            Q.pop();

            int curH, curX, curY;
            tie(curH, curX, curY) = cur;

            for (int dir = 0; dir < 6; dir++) {
                int nh = curH + dh[dir];
                int nx = curX + dx[dir];
                int ny = curY + dy[dir];

                if (nx < 0 || ny < 0 || nh < 0 || nx >= r || ny >= c || nh >= l)
                    continue;

                if (board[nh][nx][ny] == '#' || dist[nh][nx][ny] > 0)
                    continue;

                dist[nh][nx][ny] = dist[curH][curX][curY] + 1;

                if (board[nh][nx][ny] == 'E') {
                    cout << "Escaped in " << dist[nh][nx][ny] << " minute(s).\n";
                    isEscape = true;
                    break;
                }

                Q.push({nh, nx, ny});
            }
        }
        if (!isEscape)
            cout << "Trapped!\n";
    }
}