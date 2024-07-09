#include <iostream>
using namespace std;

int main() {
    int count = 0, temp;

    for(int i = 0; i < 5; i++){
        cin >> temp;
        if(temp % 2 == 0) count++;
    }

    cout << count;
    return 0;
}