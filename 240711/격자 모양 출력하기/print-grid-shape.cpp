#include <iostream>
using namespace std;

int main() {
    int n, m, r, c;
    cin >> n >> m;

    int mat[n][n] = {0};
    for(int i = 0; i < n; i++){
        for(int t = 0; t < n; t++){
            mat[i][t] = 0;
        }
    }

    for(int i = 0; i < m; i++){
        cin >> r >> c;
        mat[r - 1][c - 1] = r * c;
    }

    for(int i = 0; i < n; i++){
        for(int t = 0; t < n; t++){
            cout << mat[i][t] << ' ';
        }
        cout << endl;
    }
    return 0;
}