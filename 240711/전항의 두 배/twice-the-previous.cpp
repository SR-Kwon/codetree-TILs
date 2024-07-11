#include <iostream>
using namespace std;

int num[10];
int main() {
    cin >> num[0] >> num[1];
    cout << num[0] << ' ' << num[1] << ' ';
    for(int i = 2; i < 10; i++){
        num[i] = num[i - 2] * 2 + num[i - 1];
        cout << num[i] << ' ';
    }
    return 0;
}