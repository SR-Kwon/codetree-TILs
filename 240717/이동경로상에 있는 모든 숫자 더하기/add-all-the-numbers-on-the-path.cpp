#include <iostream>
using namespace std;

#define MAX_NUM 99
#define DIR_NUM 4

//E W S N
int dx[DIR_NUM] = {1,-1,0,0};
int dy[DIR_NUM] = {0,0,-1,1};

int dir_to_num(char dir){
    if(dir == 'E') return 0;
    else if(dir == 'W') return 1;
    else if(dir == 'S') return 2;
    else if(dir == 'N') return 3;
}

char L(char dir){
    if(dir == 'E') return 'S';
    else if(dir == 'W') return 'N';
    else if(dir == 'S') return 'W';
    else if(dir == 'N') return 'E';
}

char R(char dir){
    if(dir == 'E') return 'N';
    else if(dir == 'W') return 'S';
    else if(dir == 'S') return 'E';
    else if(dir == 'N') return 'W';
}

bool val_range(int x, int y, int n){
    return (0 <= x && x < n && 0 <= y && y < n);
}

int mat[MAX_NUM][MAX_NUM];

int main() {
    int N, T, temp;
    cin >> N >> T;
    string cmd;
    cin >> cmd;
    for(int i = 0; i < N; i++){
        for(int t = 0; t < N; t++){
            cin >> temp;
            mat[i][t] = temp;
        }
    }
    int x = N / 2;
    int y = x;
    int result = mat[x][y];
    char dir = 'N', com;
    for(int i = 0; i < T; i++){
        com = cmd[i];
        if(com == 'R'){
            dir = R(dir);

        }
        else if(com == 'L'){
            dir = L(dir);
        }
        else if(com == 'F'){
            int nx = x + dx[dir_to_num(dir)];
            int ny = y + dy[dir_to_num(dir)];
            if(1 > mat[nx][ny] || 9 < mat[nx][ny]){

            }
            else{
                x = nx, y = ny;
                result += mat[x][y];
            }
        }
    }

    cout << result;
    return 0;
}