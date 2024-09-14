#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, t;
vector<vector<int>> mat;  // 격자 정보 저장
vector<pair<int, int>> marbles;  // 구슬의 좌표 저장

// 상, 하, 좌, 우
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

// 범위 확인 함수
bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

// 구슬을 이동시키는 함수
pair<int, int> move(int x, int y) {
    int max_val = mat[x][y];
    int max_dir = -1;
    
    // 상하좌우 탐색하여 가장 큰 값이 있는 방향 선택
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (InRange(nx, ny) && mat[nx][ny] > max_val) {
            max_val = mat[nx][ny];
            max_dir = i;
        }
    }

    // 이동 가능한 방향이 있으면 그 방향으로 이동
    if (max_dir != -1) {
        return {x + dx[max_dir], y + dy[max_dir]};
    } else {
        return {x, y};  // 이동할 수 없으면 제자리
    }
}

// t초 동안 시뮬레이션 진행
void simulate() {
    for (int time = 0; time < t; time++) {
        // 1. 모든 구슬 이동
        vector<vector<int>> new_count(n, vector<int>(n, 0));  // 각 위치에 구슬 수
        vector<pair<int, int>> new_marbles;

        for (auto &marble : marbles) {
            int x = marble.first;
            int y = marble.second;
            pair<int, int> new_pos = move(x, y);
            new_marbles.push_back(new_pos);
            new_count[new_pos.first][new_pos.second]++;
        }

        // 2. 충돌 처리
        marbles.clear();
        for (int i = 0; i < new_marbles.size(); i++) {
            int x = new_marbles[i].first;
            int y = new_marbles[i].second;
            if (new_count[x][y] == 1) {
                // 충돌이 없으면 구슬 유지
                marbles.push_back({x, y});
            }
        }
    }
}

int main() {
    // 입력 처리
    cin >> n >> m >> t;
    mat.resize(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    
    // 구슬의 시작 위치 입력
    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        marbles.push_back({r - 1, c - 1});  // 1-based index에서 0-based index로 변환
    }

    // 시뮬레이션 실행
    simulate();

    // 결과 출력: t초 후 남아있는 구슬의 수
    cout << marbles.size() << endl;

    return 0;
}