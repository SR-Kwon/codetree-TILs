#include <iostream>
using namespace std;

#define MAX_NUM 100
#define DIR_NUM 4

int n, m;
int mat[MAX_NUM][MAX_NUM];

//오 아 왼 위
int dr[DIR_NUM] = {0,1,0,-1};
int dc[DIR_NUM] = {1,0,-1,0};

bool in_range(int r, int c){
    return (0 <= r && r < n && 0 <= c && c < m);
}

int main() {
    cin >> n >> m;
    int r = 0, c = 0, dir = 0, count = 1; 
    for(int i = 0; i < n; i++){
        for(int t = 0; t < m; t++){
            mat[r][c] = count++;

            //다음위치 정해주기
            int nr = r + dr[dir % 4];
            int nc = c + dc[dir % 4];
            if(!in_range(nr, nc) || mat[nr][nc] != 0){
                dir++;
                r += dr[dir % 4];
                c += dc[dir % 4];
            }
            else{
                r = nr;
                c = nc;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int t = 0; t < m; t++){
            cout << mat[i][t] << ' ';
        }
        cout << endl;
    }


    return 0;
}