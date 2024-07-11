#include <iostream>
using namespace std;

int cnt[10];
int main() {
    int a, b;
    cin >> a >> b;
    while(a > 1){
        cnt[a % b]++;
        a /= b;
    }

    int pow_sum = 0;
    for(int i = 0; i < sizeof(cnt) / sizeof(int); i++){
        pow_sum += cnt[i] * cnt[i];
    }
    cout << pow_sum;
    return 0;
}