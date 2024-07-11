#include <iostream>
using namespace std;

int main() {
    int n, col_num = 0, counter = 0, ito = 0;
    cin >> n;
    while(n * n - counter > 0){
        //1씩증가
        if(col_num % 2 == 0) ito += 1;
        //2씩증가
        else ito += 2;
        
        cout << ito << ' ';
        counter++;
        if(counter % n == 0){
            cout << endl;
            col_num++;
        }
    }
    return 0;
}