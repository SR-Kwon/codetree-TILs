#include <iostream>
using namespace std;

int main() {
    int n, ito = 0;
    cin >> n;

    int mat[n][n], flip[n][n];
    for(int i = 0; i < n; i++){
        for(int t = 0; t < n; t++){
            mat[i][t] = ++ito;
        }
    }

    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            for(int t = n - 1; t > -1; t--){
                flip[i][n - 1 - t] = mat[i][t];
            }
        }
        else{
            for(int t = 0; t < n; t++){
                flip[i][t] = mat[i][t];
            }       
        }
        
    }

    for(int i = 0; i < n; i++){
        for(int t = 0; t < n; t++){
            mat[n - 1 - t][n - 1 -i] = flip[i][t];
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