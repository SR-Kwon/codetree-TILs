#include <iostream>
using namespace std;

int main() {
    int n, min = 9999;

    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int t = i + 1; t < n; t++){
            min = abs(arr[i] - arr[t]) < min ? abs(arr[i] - arr[t]) : min;
        }
    }
    cout << min;

    return 0;
}