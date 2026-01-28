#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int R, C;
    cin >> R >> C;

    vector<vector<char>> board(R, vector<char>(C));

    vector<vector<int>> fire(R, vector<int>(C, -1));
    vector<vector<int>> jihoon(R, vector<int>(C, -1));

    queue<pair<int, int>> Q_fire;
    queue<pair<int, int>> Q_jihoon;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'F') {
                Q_fire.push({i, j});
                fire[i][j] = 0;
            } else if (board[i][j] == 'J') {
                Q_jihoon.push({i, j});
                jihoon[i][j] = 0;
            }
        }
    }

    // 불에 대한 bfs
    while (!Q_fire.empty()) {
        auto cur = Q_fire.front();
        Q_fire.pop();
        int cx = cur.first;
        int cy = cur.second;

        for (int dir = 0; dir < 4; dir++) {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
                continue;

            if (fire[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;

            fire[nx][ny] = fire[cx][cy] + 1;

            Q_fire.push({nx, ny});
        }
    }

    // 지훈이에 대한 bfs
    while (!Q_jihoon.empty()) {
        auto cur = Q_jihoon.front();
        Q_jihoon.pop();

        int cx = cur.first;
        int cy = cur.second;

        for (int dir = 0; dir < 4; dir++) {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C) { // 탈출
                cout << jihoon[cx][cy] + 1;
                return 0;
            }

            if (board[nx][ny] == '#' || jihoon[nx][ny] >= 0)
                continue;

            if (fire[nx][ny] != -1 && fire[nx][ny] <= jihoon[cx][cy] + 1)
                continue;

            jihoon[nx][ny] = jihoon[cx][cy] + 1;

            Q_jihoon.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE";
}