#include <iostream>
using namespace std;

int main() {
    string line, res;
    getline(cin, line);

    for(int i = 0; i < line.length(); i++){
        if(line[i] == 'e'){
            res = line.substr(0,i) + line.substr(i + 1);
            break;
        }
    }

    cout << res;

    return 0;
}