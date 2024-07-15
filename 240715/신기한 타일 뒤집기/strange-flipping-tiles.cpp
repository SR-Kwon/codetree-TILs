#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//white = -1;
//black = 1;

vector<int> tiles(9001);

int R(int step, int pointer){
    for(int i = 0; i < step; i++){
        tiles[pointer++] = 1;
    }

    return pointer - 1;
}

int L(int step, int pointer){
    for(int i = 0; i < step; i++){
        tiles[pointer--] = -1;
    }

    return pointer + 1;
}

int main() {
    int dir_num, step, pointer = 4500;
    char direction;
    cin >> dir_num;

    

    for(int i = 0; i < dir_num; i++){
        cin >> step >> direction;
        if(direction == 'R'){
            pointer = R(step, pointer);
        }
        else if(direction == 'L'){
            pointer = L(step, pointer);
        }
    }
    int white = count(tiles.begin(), tiles.end(), -1);
    int black = count(tiles.begin(), tiles.end(), 1);

    cout << white << ' ' << black;


    return 0;
}