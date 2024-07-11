#include <iostream>
using namespace std;

int num[9] = {9,8,7,6,5,4,3,2,1};

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n * n; i++){
        cout << num[i % 9];
        if(i == 0) continue;
        else if(i % n == n - 1) cout << endl;
    }
    return 0;
}