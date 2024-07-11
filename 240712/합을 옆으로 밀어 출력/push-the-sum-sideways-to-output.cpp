#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    int numbers[n];
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
        sum += numbers[i];
    }

    string res = to_string(sum);
    char temp;
    temp = res[0];
    for(int i = 0; i < res.length() - 1; i++){
        res[i] = res[i + 1];
    }
    res[res.length() - 1] = temp;
    cout << res;

    return 0;
}