#include <iostream>
using namespace std;

int main() {
    string line1, line2;
    int num1 = 0, num2 = 0;
    getline(cin, line1);
    getline(cin, line2);

    for(int i = 0; i < line1.length(); i++){
        if(line1[i] >= '0' && line1[i] <= '9'){ num1 = num1 * 10 + line1[i] - '0';}
    }
    for(int i = 0; i < line2.length(); i++){
        if(line2[i] >= '0' && line2[i] <= '9'){ num2 = num2 * 10 + line2[i] - '0';}
    }
    cout << num1 + num2;
    return 0;
}