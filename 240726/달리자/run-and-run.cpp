#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100] = {0};
    int b[100] = {0};

    //입력
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];

    int cost = 0;
    for(int i = n - 1; i >= 1; i--){
        if(a[i] == b[i]) continue;
        while(a[i] != b[i]){
            a[i-1]--;
            a[i]++;
            cost++;
        }
    }

    cout << cost;
    return 0;
}