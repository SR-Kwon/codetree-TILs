#include <iostream>
using namespace std;

int main() {
    int n, i, t;
    cin >> n;

    for(i = 0; i < n; i++){
        for(t = n; t > 0; t--) cout << t << ' ';
        cout << endl;
    }

    return 0;
}