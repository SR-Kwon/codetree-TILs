#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row[n];
    for(int i = n; i > 0; i--){
        row[n - i] = i;
    }

    for(int i = 1; i < n + 1; i++){
        for(int t = 0; t < n; t++){
            cout << row[t] * i << ' ';
        }
        cout << endl;
    }
    return 0;
}