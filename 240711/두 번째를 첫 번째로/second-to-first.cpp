#include <iostream>
using namespace std;

int main() {
    string line;
    
    getline(cin, line);
    char first = line[0], second = line[1];

    for(int i = 0; i < line.length(); i++){
        if(line[i] == second) line[i] = first;
    }

    cout << line;
    return 0;
}