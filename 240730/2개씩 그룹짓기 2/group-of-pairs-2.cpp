#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n * 2; i++){
        cin >> arr[i];
    }
    sort(arr, arr + 2 * n);

    int min = 1000000001;

    for(int i = 0; i < n; i++){
        if(arr[i + n] - arr[i] < min) min = arr[i + n] - arr[i];
    }

    cout << min;

    return 0;
}