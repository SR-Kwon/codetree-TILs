#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    char temp;
    float len = 0;
    int cnt = 0;
    cin >> temp;

    for(int i = 0; i < n; i++){
        if(arr[i][0] == temp){
            len += arr[i].length();
            cnt++;
        }
    }

    printf("%d %.2f", cnt, len / cnt);


    return 0;
}