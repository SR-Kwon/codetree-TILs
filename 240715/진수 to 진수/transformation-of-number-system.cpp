#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

int main() {
    int from, to, number, decimal = 0, cnt = -1;
    cin >> from >> to >> number;
    vector<int> reversed_res;

    while(number > 0){
        cnt++;
        decimal += (number % 10) * pow(from, cnt);
        number /= 10;
    }

    while(decimal > 0){
        reversed_res.push_back(decimal % to);
        decimal /= to;
    }

    for(int i = reversed_res.size() - 1; i > -1; i--){
        cout << reversed_res[i];
    }

    return 0;
}