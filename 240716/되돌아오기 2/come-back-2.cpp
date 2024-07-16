#include <iostream>
using namespace std;

#define DIR_NUM 4

//N E S W
int dx[DIR_NUM] = {0,1,0,-1};
int dy[DIR_NUM] = {1,0,-1,0};

int main() {
    int x = 0, y = 0, count = 0;
    string line;
    getline(cin, line);
    int dir = 0;
    char cmd;

    for(int i = 0; i < line.length(); i++){
        cmd = line[i];
        if(cmd == 'F'){ 
            x += dx[dir];
            y += dy[dir];
        }
        else if(cmd == 'R'){
            dir = (dir + 1) % 4;
        }
        else if(cmd == 'L'){
            dir = (dir - 1) % 4;
        }
        count++;
        // cout << x << ' ' << y << ' ' << dir << ' ' << cmd <<endl;
        if(x == 0 && y == 0){
            cout << count;
            return 0;
        }
    }

    cout << -1;
    return 0;
}