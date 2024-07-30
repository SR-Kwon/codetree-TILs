#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 3) {
        cout << "Error: Need at least 3 elements" << endl;
        return 1;
    }

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // 배열을 정렬합니다.
    sort(arr, arr + n);

    // 가장 큰 세 수의 곱과 가장 작은 두 수와 가장 큰 수의 곱을 비교합니다.
    int maxProduct = max(arr[n-1] * arr[n-2] * arr[n-3], arr[0] * arr[1] * arr[n-1]);

    cout << maxProduct;
    return 0;
}