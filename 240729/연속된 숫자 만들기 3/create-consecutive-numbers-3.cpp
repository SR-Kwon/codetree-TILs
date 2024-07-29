#include <iostream>
using namespace std;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    int cnt;


    if(arr[2]-arr[1] == 1 && arr[1] - arr[0] == 1){
        cnt = 0;
    }
    else if(arr[2]-arr[1] == 2 && arr[1] - arr[0] == 2){
        cnt = 1;
    }
    else{
        int large_gap = max(arr[2] - arr[1], arr[1] - arr[0]);
        cnt += large_gap - 1;
    }

    cout << cnt;

    return 0;
}