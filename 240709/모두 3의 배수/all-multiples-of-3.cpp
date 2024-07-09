#include <iostream>
using namespace std;

int main() {
    int temp, stat = 1;
    for(int i = 0; i < 5; i++){
        cin >> temp;
        if(temp % 3 != 0){
            stat = 0;
            break;
        }
    }

    cout << stat;
    return 0;
}