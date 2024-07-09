#include <iostream>
using namespace std;

int main() {
    int a, b, stat = 0;
    cin >> a >> b;
    for(int i = a; i < b+1; i++){
        if(1920 % i == 0 && 2880 % i == 0){
            stat = 1;
            break;
        }
    }

    cout << stat;
    return 0;
}