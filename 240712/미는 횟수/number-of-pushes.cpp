#include <iostream>
using namespace std;
string R(string str){
    return str.back() + str.substr(0, str.length() -1);
}

int main() {
    string A, B, temp;
    cin >> A >> B;

    if(A.length() != B.length()){ 
        cout << -1;
        return 0;
    }
    
    temp = A;
    for(int i = 0; i < A.length(); i++){
        temp = R(temp);
        if(temp == B){
            cout << i + 1;
            return 0;
        }
    }

    cout << -1;

    return 0;
}