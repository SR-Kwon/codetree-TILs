#include <iostream>
using namespace std;

string L(string line){
    string temp(line.length(), ' ');
    for(int i = 0; i < line.length() - 1; i++){
        temp[i] = line[i + 1];
    }
    temp[line.length() - 1] = line[0];

    return temp;
}

string R(string line){
    string temp(line.length(), ' ');
    for(int i = 1; i < line.length(); i++){
        temp[i] = line[i - 1];
    }
    temp[0] = line[line.length() - 1];

    return temp;
}

int main() {
    string line, cmd;
    getline(cin, line);
    getline(cin, cmd);

    for(int i = 0; i < cmd.length(); i++){
        if(cmd[i] == 'L') line = L(line);
        else if(cmd[i] == 'R') line = R(line);
    }
    
    cout << line;

    return 0;
}