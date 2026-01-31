#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int F, S, G, U, D;
    cin >> F >> S >> G >> U >> D;

    int dist[1000002];

    fill(dist + 1, dist + F + 1, -1);

    queue<int> Q;
    dist[S] = 0;
    Q.push(S);

    while (!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        for (auto next : {cur + U, cur - D}) {
            if (next <= 0 || next > F ||
                dist[next] != -1) // 범위 벗어남, 방문했음
                continue;

            dist[next] = dist[cur] + 1;
            Q.push(next);
        }
    }

    if (dist[G] == -1)
        cout << "use the stairs";
    else
        cout << dist[G];
}