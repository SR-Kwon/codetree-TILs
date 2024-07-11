#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, temp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 2)cnt++;
        if(cnt == 3){
            cout << i + 1;
            break;
        }
    }

    return 0;
}