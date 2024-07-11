#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    for(int i = line.length() - 1; i > -1; i--){
        if(i % 2 != 0){
            cout << line[i];
        }
    }
    return 0;
}