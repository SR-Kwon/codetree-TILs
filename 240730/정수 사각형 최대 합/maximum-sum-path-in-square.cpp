#include <iostream>
using namespace std;

int mat[100][100]={0};
int dp[100][100] = {0};



int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int t = 0; t < n; t++)
            cin >> mat[i][t];




    return 0;
}