#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int mat1[n][m], mat2[n][m];
    for(int i = 0; i < n; i++){
        for(int t = 0; t < m; t++){
            cin >> mat1[i][t];
        }
    }
    for(int i = 0; i < n; i++){
        for(int t = 0; t < m; t++){
            cin >> mat2[i][t];
        }
    }

    for(int i = 0; i < n; i++){
        for(int t = 0; t < m; t++){
            if(mat1[i][t] == mat2[i][t])mat1[i][t] = 0;
            else mat1[i][t] = 1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int t = 0; t < m; t++){
            cout << mat1[i][t] << ' ';
        }
        cout << endl;
    }
    return 0;
}