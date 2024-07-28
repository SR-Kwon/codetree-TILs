#include <iostream>

using namespace std;

int X;

int main() {
    cin >> X;

    int pos = 1;
    int speed = 1;
    int time = 1;

    while(pos < X) {
        pos += speed;
        time++;
        
        //속력이 감소하는 지점
        if(X - pos <= speed * (speed - 1) / 2){
            speed--;
        }else{
            speed++;
        }

        // cout << pos << " " << speed << " " << X << " " << time << endl;
    }

    cout << time;

    return 0;
}