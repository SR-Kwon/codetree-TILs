#include <iostream>
using namespace std;

int a;

int main() {
    
    cin >> a;

    if(a % 3 == 0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    if(a % 5 == 0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    return 0;
}