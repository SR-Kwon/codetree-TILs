#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        int sum = 0;
        for(int t = a; t < b + 1; t++){
            if(t % 2 == 0){
                sum += t;
            }
        }
        cout << sum << endl;
    }
    return 0;
}