#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 최대 동전 수를 찾는 함수
int maxCoinsIn3x3Subgrid(int n, const vector<vector<int>>& grid) {
    int maxCoins = 0;

    // 모든 가능한 3x3 격자를 탐색
    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= n - 3; j++) {
            int coinCount = 0;
            
            // 현재 3x3 격자의 동전 수 계산
            for (int x = 0; x < 3; x++) {
                for (int y = 0; y < 3; y++) {
                    coinCount += grid[i + x][j + y];
                }
            }

            // 최대 동전 수 업데이트
            maxCoins = max(maxCoins, coinCount);
        }
    }

    return maxCoins;
}

int main() {
    int n;
    cin >> n; // 격자의 크기 입력
    vector<vector<int>> grid(n, vector<int>(n)); // N*N 격자 선언

    // 격자 정보 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // 최대 동전 수 계산 및 출력
    int result = maxCoinsIn3x3Subgrid(n, grid);
    cout << result << endl;

    return 0;
}