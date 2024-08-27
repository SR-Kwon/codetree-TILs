#include <iostream>
#include <vector>
using namespace std;

int get_max(vector<vector<int>> mat, int n, int m){
    int max = -1;
    //ㅁ 구해서 하나씩 빼기
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            int temp = 0;
            temp += mat[i - 1][j - 1] + mat[i - 1][j] + mat[i][j - 1] + mat[i][j];

            if(max < (temp - mat[i - 1][j - 1])) max = temp - mat[i - 1][j - 1];
            else if(max < (temp - mat[i - 1][j])) max = temp - mat[i - 1][j];
            else if(max < (temp - mat[i][j - 1])) max = temp - mat[i][j - 1];
            else if(max < (temp - mat[i][j])) max = temp - mat[i][j];
        }
    }
    //ㅣ 모양
    for(int i = 2; i < n; i++){
        for(int j = 0; j < m; j++){
            int temp = 0;
            temp += mat[i - 2][j] + mat[i - 1][j] + mat[i][j];
            if(max < temp) max = temp;
        }
    }

    //ㅡ 모양
    for(int i = 0; i < n; i++){
        for(int j = 2; j < m; j++){
            int temp = 0;
            temp += mat[i][j - 2] + mat[i][j - 1] + mat[i][j];
            if(max < temp) max = temp;
        }
    }

    return max;
}
int main() {
    int n, m;

    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }

    cout << get_max(mat, n, m);

    return 0;
}