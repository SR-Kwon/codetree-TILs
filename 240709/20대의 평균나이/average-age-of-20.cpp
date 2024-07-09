#include <iostream>
using namespace std;

int main() {
    int temp, count = 0;
    float sum = 0;
    while(true){
        cin >> temp;
        if(temp / 10 != 2) break;
        sum += temp;
        count++;
    }

    printf("%.2f", sum / count);
    return 0;
}