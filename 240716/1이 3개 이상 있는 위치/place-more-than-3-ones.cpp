#include <iostream>
using namespace std;

//상 하 좌 우
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int mat[100][100];

bool val(int x, int y, int n){
    return (0 <= x && x < n && 0 <= y && y < n);
}

int count_one(int x, int y, int n){
    int res = 0;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(val(nx, ny, n) && mat[nx][ny]) res++;
    }
    return res;
}

int main() {
    int n, count = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int t = 0; t < n; t++){
            cin >> mat[i][t];
        }
    }

    for(int i = 0; i < n; i++){
        for(int t = 0; t < n; t++){
            if(count_one(i, t, n) >= 3) count++;
        }
    }

    cout << count;

    return 0;
}