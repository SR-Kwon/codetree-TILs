#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mat[n][n];
    for(int i = 0; i < n; i++){
        for(int t = 0; t < n; t++){
            mat[i][t] = 1;
        }
    }

    for(int i = 1; i < n; i++){
        for(int t = 1; t < n; t++){
            mat[i][t] = mat[i-1][t] + mat[i][t-1] + mat[i-1][t-1];
        }
    }

    for(int i = 0; i < n; i++){
        for(int t = 0; t < n; t++){
            cout << mat[i][t] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}