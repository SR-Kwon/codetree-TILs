#include <iostream>
using namespace std;

int main() {
    int n, times;
    cin >> n;
    for(int i = 0; i < n; i++){
        times = i * 2 + 1;
        for(int t = 0; t < times; t++)cout << '*';
        cout << endl;
    }

    return 0;
}