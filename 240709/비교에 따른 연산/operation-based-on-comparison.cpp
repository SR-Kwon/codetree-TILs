#include <iostream>
using namespace std;

int main() {
    int a, b, ans;

    cin >> a >> b;
    if(a > b) ans = a * b;
    else ans = b % a;

    cout << ans;
    return 0;
}