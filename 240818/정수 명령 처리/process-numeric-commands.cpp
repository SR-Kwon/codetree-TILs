#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<int> s;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;

        if(temp == "push"){
            int num;
            cin >> num;
            s.push(num);
        }

        else if(temp == "pop"){
            cout << s.top() << endl;
            s.pop();
        }

        else if(temp == "size"){
            cout << s.size() << endl;
        }

        else if(temp == "empty"){
            if(!s.empty()){
                cout << 0 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
        else if(temp == "top"){
            cout << s.top() << endl;
        }
    }

    return 0;
}