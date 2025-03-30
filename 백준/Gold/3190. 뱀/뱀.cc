#include <iostream>
#include <deque>
#include <map>

using namespace std;

int N, K, L;
int board[101][101] = {0}; // 0: 빈 칸, 1: 사과, 2: 뱀
map<int, char> directions;
deque<pair<int, int>> snake;

// 이동 방향 (우, 하, 좌, 상) - 시계 방향
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool isCollision(int y, int x) {
    return (y < 1 || y > N || x < 1 || x > N || board[y][x] == 2);
}

int playGame() {
    int time = 0, dir = 0; // 초기 방향은 오른쪽
    int x = 1, y = 1; // 뱀의 머리 위치
    snake.push_back({y, x});
    board[y][x] = 2;

    while (true) {
        time++;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (isCollision(ny, nx)) return time; // 벽 또는 자기 자신과 충돌 시 종료

        if (board[ny][nx] == 1) { // 사과가 있다면
            board[ny][nx] = 2; // 머리 이동 (꼬리 유지)
        } else {
            board[ny][nx] = 2;
            auto tail = snake.front();
            snake.pop_front();
            board[tail.first][tail.second] = 0; // 꼬리 이동
        }

        snake.push_back({ny, nx});
        x = nx, y = ny;

        if (directions.count(time)) { // 방향 전환 시간인지 확인
            if (directions[time] == 'L') {
                dir = (dir + 3) % 4; // 왼쪽 회전 (반시계 방향)
            } else {
                dir = (dir + 1) % 4; // 오른쪽 회전 (시계 방향)
            }
        }
    }
}

int main() {
    cin >> N >> K;
    
    for (int i = 0; i < K; i++) {
        int r, c;
        cin >> r >> c;
        board[r][c] = 1; // 사과 위치
    }

    cin >> L;
    for (int i = 0; i < L; i++) {
        int X;
        char C;
        cin >> X >> C;
        directions[X] = C; // 방향 전환 정보 저장
    }

    cout << playGame() << endl;
    return 0;
}
