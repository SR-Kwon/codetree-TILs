#include <iostream>
using namespace std;

int main() {
    int age1, age2;
    char sex1, sex2;

    cin >> age1 >> sex1 >> age2 >> sex2;

    if((sex1 == 'M' && age1 >= 19) || (sex2 == 'M' && age2 >= 19)) cout << 1;
    else cout << 0;

    return 0;
}