#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, max_board = 0, ans = 0;
    cin >> N;
    int board[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
            max_board = max(max_board, board[i][j]);
        }
    }

    for (int rain = 0; rain <= max_board; rain++) {

        bool visited[N][N] = {};

        int area = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (board[i][j] <= rain || visited[i][j])
                    continue;

                queue<pair<int, int>> Q;
                Q.push({i, j});
                visited[i][j] = true;

                area++;

                while (!Q.empty()) {
                    auto cur = Q.front();
                    Q.pop();

                    int cx = cur.first;
                    int cy = cur.second;

                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cx + dx[dir];
                        int ny = cy + dy[dir];

                        if (nx < 0 || ny < 0 || nx >= N || ny >= N ||
                            board[nx][ny] <= rain || visited[nx][ny])
                            continue;

                        Q.push({nx, ny});
                        visited[nx][ny] = true;
                    }
                }
            }
        }

        ans = max(ans, area);
    }

    cout << ans;
}