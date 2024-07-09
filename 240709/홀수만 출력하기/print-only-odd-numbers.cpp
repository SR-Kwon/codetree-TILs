#include <iostream>
using namespace std;


int main() {
    int N, temp;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> temp;
        if(temp % 3 == 0 && temp % 2 != 0){
            cout << temp << endl;
        }
    }

    return 0;
}