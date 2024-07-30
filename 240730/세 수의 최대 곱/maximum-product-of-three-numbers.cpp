#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int max = -1;
    for(int i = 0; i < n - 2; i++){
        for(int t = i + 1; t < n - 1; t++){
            for(int k = t + 1; k < n; k++){
                if(arr[i] * arr[t] * arr[k] > max){
                    max = arr[i] * arr[t] * arr[k];
                }
            }
        }
    }

    cout << max;
    return 0;
}