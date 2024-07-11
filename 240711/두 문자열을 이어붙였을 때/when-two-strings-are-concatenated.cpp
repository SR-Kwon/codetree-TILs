#include <iostream>
using namespace std;

int main() {
    string A, B, AB, BA;
    getline(cin, A);
    getline(cin, B);

    AB = A + B;
    BA = B + A;

    for(int i = 0; i < AB.length(); i++){
        if(AB[i] != BA[i]){cout << "false"; return 0;}
    }
    cout << "true";
    return 0;
}