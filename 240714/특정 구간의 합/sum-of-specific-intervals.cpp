#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a1, a2;
    cin >> n >> m;
    int arr[n], res[m];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < m; i++){
        cin >> a1 >> a2;
        int temp = 0;
        for(int t = 0; t <= a2 - a1; t++){
            temp += arr[a1 - 1 + t];
        }
        cout << temp << endl;
    }

    return 0;
}