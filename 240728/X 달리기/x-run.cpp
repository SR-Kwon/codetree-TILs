#include <iostream>

using namespace std;

int X;

int main() {
    cin >> X;

    int ans = 1;
    int speed = 1;
    int time = 1;

    while (ans < X) {
        ans += speed;
        time++;
        
        //속력이 감소하는 지점
        if(X / 2 <= ans){
            speed--;
        }else{
            speed++;
        }

        // cout << ans << " " << speed << " " << X << " " << time << endl;
    }

    cout << time;

    return 0;
}