#include <iostream>
using namespace std;

#define DIR_NUM 4
#define MAX_NUM 50

//위 아래 오른쪽 왼쪽
int dx[DIR_NUM] = {0,0,1,-1};
int dy[DIR_NUM] = {1,-1,0,0};

bool in_range(int x, int y, int n){
    return (x <= n && 0 <= x && 0 <= y && y <= n);
}

int dir_to_num(char dir){
    if(dir == 'U') return 0;
    else if(dir == 'D') return 1;
    else if(dir == 'R') return 2;
    else if(dir == 'L') return 3;
}

int main() {
    int n, t;
    int x, y;
    char dir;
    cin >> n >> t;
    cin >> y >> x >> dir;
    n--;
    x--;
    y--;
    for(int i = 0; i < t; i++){
        int nx = x + dx[dir_to_num(dir)];
        int ny = y + dy[dir_to_num(dir)];
        if(!in_range(nx, ny, n)){
            if(dir == 'U') dir = 'D';
            else if(dir == 'D') dir = 'U';
            else if(dir == 'R') dir = 'L';
            else if(dir == 'L') dir = 'R';
        }
        else{
            x = nx;
            y = ny;
        }
    }

    cout << y + 1 << ' ' << x + 1;

    return 0;
}