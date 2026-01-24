#include <bits/stdc++.h>

using namespace std;

int paper[500][500];
bool visited[500][500] = {
    false,
};
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    // 입력받기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> paper[i][j];
        }
    }

    int count = 0, max_size = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int cur_size = 0;

            queue<pair<int, int>> Q;

            if (paper[i][j] == 0 || visited[i][j])
                continue; // 0이거나 방문했으면 넘어가기

            Q.push({i, j});
            visited[i][j] = true;
            count++;

            while (!Q.empty()) {
                auto cur = Q.front();
                Q.pop();
                cur_size++;

                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];

                    if (nx < 0 || ny < 0 || nx >= n || ny >= m) // 범위 밖
                        continue;
                    if (visited[nx][ny] || paper[nx][ny] == 0)
                        continue;

                    visited[nx][ny] = true;
                    Q.push({nx, ny});
                }
            }
            max_size = max(cur_size, max_size);
        }
    }

    cout << count << '\n' << max_size;
}