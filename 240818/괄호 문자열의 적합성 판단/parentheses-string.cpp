#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string line;
    stack<char> s;
    cin >> line;

    for(int i = 0; i < line.length(); i++){
        if(line[i] == '('){
            s.push(line[i]);
        }
        else if(line[i] == ')'){
            if(!s.empty() && s.top() == '('){  // 스택이 비어 있는지 확인
                s.pop();
            }
            else{
                cout << "No";
                return 0;
            }
        }
    }

    if(!s.empty()){
        cout << "No";
    }
    else{
        cout << "Yes";
    }

    return 0;
}