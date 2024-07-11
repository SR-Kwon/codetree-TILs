#include <iostream>
using namespace std;

int main() {
    int mat[4][4];
    for(int i = 0; i < 4; i++){
        for(int t = 0; t < 4; t++){
            cin >> mat[i][t];
        }
    }
    int sum = 0;
    for(int i = 0; i < 4; i++){
        for(int t = 0; t < i + 1; t++){
            sum += mat[i][t];
        }
    }
    cout << sum;
    return 0;
}