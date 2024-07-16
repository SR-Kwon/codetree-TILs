#include <iostream>
using namespace std;

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

int main() {
    int x = 0, y = 0, n, t, count = 0;
    cin >> n;
    char dir;

    for(int i = 0; i < n; i++){
        cin >> dir >> t;
        for(int j = 0; j < t; j++){
            x += dx[dir_to_num(dir)];
            y += dy[dir_to_num(dir)];
            count++;
            if(x == 0 && y == 0){
                cout << count;
                return 0;
            }
        }
    }

    cout << -1;
    return 0;
}