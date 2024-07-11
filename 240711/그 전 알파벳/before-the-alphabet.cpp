#include <iostream>
using namespace std;

int main() {
    char temp;
    cin >> temp;

    char res = temp - 1;
    if(temp == 'a') res = 'z';
    cout << res;
    return 0;
}