#include <iostream>
using namespace std;

int operand[4] = {2,4,6,8};
int main() {
    int a, b;
    cin >> a >> b;
    
    for(int i = 0; i < 4; i++){
        for(int t = b; t > a - 1; t--){
            cout << t << " * " << operand[i] << " = " << t * operand[i];
            if(t == a){}
            else cout << " / ";
        }
        cout << endl;
    }
    return 0;
}