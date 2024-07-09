#include <iostream>
using namespace std;

int main() {
    int m;
    string ans;
    cin >> m;

    if(m >= 3000){
        ans = "book";
    }
    else if(m >= 1000){
        ans = "mask";
    }
    else{
        ans = "no";
    }

    cout << ans;
    return 0;
}