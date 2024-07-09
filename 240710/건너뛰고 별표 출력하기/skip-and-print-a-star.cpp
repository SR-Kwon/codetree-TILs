#include <iostream>
using namespace std;

int main() {
    int n, times;
    cin >> n;

    for(int i = 0; i < n; i++){
        times = i + 1;
        for(int j = 0; j < times; j++){
            cout << '*';
        }
        cout << endl << endl;
    }

    for(int i = n - 1; i >= 0 ; i--){
        times = i;
        for(int j = 0; j < times; j++){
            cout << '*';
        }
        cout << endl << endl;
    }

    return 0;
}