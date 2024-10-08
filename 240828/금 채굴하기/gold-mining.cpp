#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 20

int n, m;
int arr[MAX_N][MAX_N];

int GetArea(int k) {
    return k*k + (k+1)*(k+1);
}

int GetNumOfGold(int row, int col, int k) {
    int num_of_gold = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            // 모든 영역을 돌면서 주어진 마름모 안에 들어가는지 확인
            // row와 col을 마름모의 중앙 위치라고 가정
            if(abs(row-i)+abs(col-j) <= k) {
                num_of_gold += arr[i][j];
            }
        }
    }

    return num_of_gold;
}

int main() {
    cin >> n>>m;

    for(int row=0; row<n; row++) {
        for(int col=0; col<n; col++) {
            cin >> arr[row][col];
        }
    }

    int max_gold = 0;
    for(int row=0; row<n; row++) {
        for(int col=0; col<n; col++) {
            for(int k=0; k<= 2*(n-1); k++) {
                int num_of_gold = GetNumOfGold(row, col, k);

                if(num_of_gold*m >= GetArea(k)) {
                    max_gold = max(max_gold, num_of_gold);
                }
            }
        }
    }

    cout << max_gold;    
}