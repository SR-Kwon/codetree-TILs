#include <iostream>
using namespace std;

int main() {
    string A, B;
    int cnt = 0;
    getline(cin, A);
    getline(cin, B);

    for(int i = 1; i < A.length(); i++){
        if(A[i - 1] == B[0] && A[i] == B[1]) cnt++;
    }

    cout << cnt;
    return 0;
}