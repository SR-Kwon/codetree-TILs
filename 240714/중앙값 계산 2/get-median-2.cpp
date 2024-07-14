#include <iostream>
#include <algorithm>
using namespace std;

int get_med(int arr[], int len){
    int temp[len];

    for(int i = 0; i < len; i++) {
        temp[i] = arr[i];
    }

    sort(temp, temp + len);

    return temp[len / 2];
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];

        if(i % 2 == 0) cout << get_med(arr, i + 1) << ' ';
    }
    return 0;
}