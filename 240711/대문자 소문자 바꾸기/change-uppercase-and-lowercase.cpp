#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    string res(line.length(), ' ');

    for(int i = 0; i < line.length(); i++){
        if(isupper(line[i])) res[i] = tolower(line[i]);
        else res[i] = toupper(line[i]);
    }
    cout << res;
    return 0;
}