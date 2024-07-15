#include <iostream>
using namespace std;

//red = -1;
//blue = 1;
int board[201][201];
void paint(int x1, int y1, int x2, int y2, int color){
    int fill = 0;
    //red
    if(color % 2 == 0) fill = -1;
    //blue
    else fill = 1;

    for(int i = x1; i < x2; i++){
        for(int t = y1; t < y2; t++){
            board[100 + i][100 + t] = fill;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int x1,y1,x2,y2;
    for(int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        paint(x1, y1, x2, y2, i);
    }

    int red = 0, blue = 0;
    for(int i = 0; i < 201; i++){
        for(int t = 0; t < 201; t++){
            if(board[i][t] == -1) red++;
            else if(board[i][t] == 1) blue++;
        }
    }
    
    cout << blue;

    return 0;
}