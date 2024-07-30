#include <iostream>
#include <algorithm>
using namespace std;

int arr[200000];

int main() {
    int n;
    cin >> n;

    
    for(int i = 0; i < n * 2; i++){
        cin >> arr[i];
    }
    sort(arr, arr + 2 * n);

    int min_diff = 1000000001;

    for(int i = 0; i < n; i++){
        int diff = arr[i + n] - arr[i];
        if(diff < min_diff) min_diff = diff;
    }

    cout << min_diff;

    return 0;
}