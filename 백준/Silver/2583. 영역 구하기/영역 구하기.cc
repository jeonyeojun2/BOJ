#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N, K;
    cin >> M >> N >> K;

    int board[102][102] = {};
    int visit[102][102] = {};
    int cnt = 0;
    vector<int> ans;

    for (int k = 0; k < K; k++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int i = y1; i < y2; i++) {
            for (int j = x1; j < x2; j++) {
                board[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 1 || visit[i][j] == 1)
                continue;

            queue<pair<int, int>> Q;
            visit[i][j] = 1;
            Q.push({i, j});
            cnt++;
            int width = 1;

            while (!Q.empty()) {
                auto cur = Q.front();
                Q.pop();
                int x = cur.first;
                int y = cur.second;

                for (int dir = 0; dir < 4; dir++) {
                    int nx = x + dx[dir];
                    int ny = y + dy[dir];

                    if (nx < 0 || ny < 0 || nx >= M || ny >= N)
                        continue;

                    if (board[nx][ny] == 1 || visit[nx][ny] == 1)
                        continue;

                    Q.push({nx, ny});
                    visit[nx][ny] = 1;
                    width++;
                }
            }

            ans.push_back(width);
        }
    }

    sort(ans.begin(), ans.end());
    cout << cnt << "\n";

    for (auto k : ans)
        cout << k << " ";
}