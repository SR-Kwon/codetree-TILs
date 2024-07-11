#include <iostream>
using namespace std;

char alp[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main() {
    int n, counter = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int t = 0; t < i; t++) cout << "  ";
        for(int t = n - i; t > 0; t--){
            cout << alp[counter % 26] << ' ';
            counter++;
        }
        cout << endl;
    }
    return 0;
}