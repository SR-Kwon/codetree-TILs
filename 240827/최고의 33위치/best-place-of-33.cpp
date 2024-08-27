#include <iostream>
#include <algorithm>

using namespace std;

int get_maxCoins(int n, int arr[20][20]){
    int maxCoins = 0;

    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= n - 3; j++) {
            int coinCount = 0;
            
            for (int x = 0; x < 3; x++) {
                for (int y = 0; y < 3; y++) {
                    coinCount += arr[i + x][j + y];
                }
            }

            maxCoins = max(maxCoins, coinCount);
        }
    }

    return maxCoins;
}

int main() {
    int n;
    cin >> n;
    int arr[20][20];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int result = get_maxCoins(n, arr);
    cout << result << endl;

    return 0;
}