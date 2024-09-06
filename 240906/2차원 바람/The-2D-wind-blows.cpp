//
//  main.cpp
//  Scratch_paper
//
//  Created by Alex Kwon on 9/3/24.
//

// N M Q
// 값들
// r1 c1 r2 c2
// 좌상단  우하단

#include <iostream>
#include <vector>

using namespace std;

int n, m, q;

void rotate(vector<vector<int>>& mat, int r1, int c1, int r2, int c2){
    // 직사각형 경계의 값들을 임시로 저장한 후 시계방향으로 한 칸씩 회전
    vector<int> temp;
    
    // 상단 (왼쪽에서 오른쪽으로)
    for(int c = c1; c < c2; c++) temp.push_back(mat[r1][c]);
    // 오른쪽 (위에서 아래로)
    for(int r = r1; r < r2; r++) temp.push_back(mat[r][c2]);
    // 하단 (오른쪽에서 왼쪽으로)
    for(int c = c2; c > c1; c--) temp.push_back(mat[r2][c]);
    // 왼쪽 (아래에서 위로)
    for(int r = r2; r >= r1; r--) temp.push_back(mat[r][c1]);

    // 시계방향 회전: 한 칸씩 뒤로 밀기
    int index = 0;
    
    // 상단 (왼쪽에서 오른쪽으로)
    for(int c = c1 + 1; c <= c2; c++) mat[r1][c] = temp[index++];
    // 오른쪽 (위에서 아래로)
    for(int r = r1 + 1; r <= r2; r++) mat[r][c2] = temp[index++];
    // 하단 (오른쪽에서 왼쪽으로)
    for(int c = c2 - 1; c >= c1; c--) mat[r2][c] = temp[index++];
    // 왼쪽 (아래에서 위로)
    for(int r = r2 - 1; r >= r1; r--) mat[r][c1] = temp[index++];
}


bool InRange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < m;
}

void set_avg(vector<vector<int>>& mat, int r1, int c1, int r2, int c2){
    
    vector<vector<int>> temp(n, vector<int>(m));
    
    for(int r = r1; r <= r2; r++){
        for(int c = c1; c <= c2; c++){
            int curSum = mat[r][c], curCnt = 1;
            int dirs[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
            for(int d=0; d<4; d++){
                int nx = r+dirs[d][0], ny = c+dirs[d][1];
                if(InRange(nx,ny)){
                    curSum += mat[nx][ny];
                    curCnt++;
                }
            }
            temp[r][c] = curSum/curCnt;
        }
    }
    
    // 직사각형 옮기기
    for(int r = r1; r <= r2; r++)
        for(int c = c1; c <= c2; c++)
            mat[r][c] = temp[r][c];
}


int main() {
    
    cin >> n >> m >> q;
    
    vector<vector<int>> mat(n, vector<int>(m));
    
    for(int r = 0; r < n; r++){
        for(int c = 0 ; c < m; c++){
            cin >> mat[r][c];
        }
    }
    
    for(int i = 0; i < q; i++){
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        r1--;
        c1--;
        r2--;
        c2--;
        
        rotate(mat, r1, c1, r2, c2);
        set_avg(mat, r1, c1, r2, c2);
    }
    
    for(int r = 0; r < n; r++){
        for(int c = 0 ; c < m; c++){
            cout << mat[r][c] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}