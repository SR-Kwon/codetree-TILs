#include <iostream>
using namespace std;

#define MAX_NUM 100
#define DIR_NUM 4

int mat[MAX_NUM][MAX_NUM];
// U D L R
int dx[DIR_NUM] = {0,0,-1,1};
int dy[DIR_NUM] = {1,-1,0,0};

bool val_range(int x, int y, int n){
    return (0 <= x && x < n && 0 <= y && y < n);
}


bool val_safe(int x, int y){
    int count = 0;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(mat[nx][ny] == 1) count++;
    }
    
    return count == 3;
}

int main() {
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        mat[x][y] = 1;
        if(val_range(x, y, N) && val_safe(x, y)) cout << 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}