#include <iostream>
using namespace std;

int main() {
    int a, b, ans = 1;
    cin >> a >> b;
    for(int i = 1; i < b + 1; i++){
        if(i % a == 0) ans *= i;
    }
    cout << ans;
    return 0;
}