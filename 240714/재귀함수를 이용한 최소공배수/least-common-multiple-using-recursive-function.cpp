#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return abs(a * b) / gcd(a, b);
}

int get_mul_lcm(int arr[], int n){
    if(n == 1) return arr[0];
    return lcm(arr[n - 1], get_mul_lcm(arr, n - 1));
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << get_mul_lcm(arr, n);
    
    return 0;
}