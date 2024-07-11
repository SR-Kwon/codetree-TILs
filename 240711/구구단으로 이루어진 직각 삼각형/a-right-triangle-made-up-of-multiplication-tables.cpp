#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int t = 0; t < n - i; t++){
            cout << i + 1 << " * " << t + 1 << " = " << (i+1)*(t+1);
            if(t == n - i - 1){}
            else cout << " / ";
        }
        cout << endl;
    }
    return 0;
}