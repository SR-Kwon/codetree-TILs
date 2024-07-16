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

char R(char dir){
    if(dir == 'E') return 'S';
    else if(dir == 'W') return 'N';
    else if(dir == 'S') return 'W';
    else if(dir == 'N') return 'E';
}

char L(char dir){
    if(dir == 'E') return 'N';
    else if(dir == 'W') return 'S';
    else if(dir == 'S') return 'E';
    else if(dir == 'N') return 'W';
}

int main() {
    int x = 0, y = 1, count = 0;
    string line;
    getline(cin, line);
    char dir = 'N';
    char cmd;

    for(int i = 0; i < line.length(); i++){
        cmd = line[i];
        if(cmd == 'F'){ }
        else if(cmd == 'R'){
            dir = R(dir);
        }
        else if(cmd == 'L'){
            dir = L(dir);
        }
        x += dx[dir_to_num(dir)];
        y += dy[dir_to_num(dir)];
        count++;
        if(x == 0 && y == 0){
            cout << count;
            return 0;
        }
    }

    cout << -1;
    return 0;
}