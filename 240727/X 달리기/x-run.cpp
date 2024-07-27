#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int current_speed = 1;
    int current_position = 0;
    int count = 0;

    while(current_position < x){
        current_position += current_speed;
        if(x % 2 == 0){
            if(current_position < x / 2)
                current_speed++;
            else if(current_speed == 1){
                //pass
            }
            else if(current_position >= x / 2)
                current_speed--;
        }
        else{
            if(current_position < x / 2 + 1)
                current_speed++;
            else if(current_speed == 1){
                //pass
            }
            else if(current_position >= x / 2 + 1)
                current_speed--; 
        }

        count++;
    }

    cout << count;

    return 0;
}