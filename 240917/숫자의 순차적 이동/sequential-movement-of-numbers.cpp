//
//  main.cpp
//  Scratch_paper
//
//  Created by Alex Kwon on 9/3/24.
//


#include <iostream>
#include <vector>
using namespace std;

int n, m;

// 방향 이동 정의 (좌상, 상, 우상, 좌, 우, 좌하, 하, 우하)
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

// 범위 체크 함수
bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

// 다음 이동할 방향을 계산하는 함수
int next_dir(int r, int c, vector<vector<int>>& mat) {
    int next_dir = 0;
    int max_value = -1;
    
    for (int dir = 0; dir < 8; dir++) {
        int nr = r + dy[dir];
        int nc = c + dx[dir];
        if (InRange(nr, nc) && mat[nr][nc] > max_value) {
            next_dir = dir;
            max_value = mat[nr][nc];
        }
    }
    
    return next_dir;
}

// 한 턴 동안 모든 숫자를 이동시키는 함수
void one_turn(vector<vector<int>>& mat, vector<vector<int>>& sort_place) {
    for (int i = 0; i < sort_place.size(); i++) {
        int now_r = sort_place[i][0];
        int now_c = sort_place[i][1];
        int dir = next_dir(now_r, now_c, mat);
        
        // 이동할 방향의 좌표 계산
        int nr = now_r + dy[dir];
        int nc = now_c + dx[dir];
        
        // 숫자 교환
        swap(mat[now_r][now_c], mat[nr][nc]);
        
        // 좌표 정보 업데이트
        swap(sort_place[mat[now_r][now_c] - 1], sort_place[mat[nr][nc] - 1]);
    }
}

int main() {
    cin >> n >> m;
    
    vector<vector<int>> mat(n, vector<int>(n)); // 격자판
    vector<vector<int>> sort_place(n * n, vector<int>(2)); // 숫자별 좌표 저장
    
    // 입력 처리 및 숫자별 좌표 저장
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            sort_place[mat[i][j] - 1] = {i, j};
        }
    }
    
    // m번의 턴 수행
    for (int i = 0; i < m; i++) {
        one_turn(mat, sort_place);
    }
    
    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}