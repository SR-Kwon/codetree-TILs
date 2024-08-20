#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<int> dq;
    int n, val;
    cin >> n;

    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        if(temp == "push_front"){
            cin >> val;
            dq.push_front(val);
        }
        else if(temp == "push_back"){
            cin >> val;
            dq.push_back(val);
        }
        else if(temp == "pop_front"){
            cout << dq.front() << endl;
            dq.pop_front();
        }
        else if(temp == "pop_back"){
            cout << dq.back() << endl;
            dq.pop_back();
        }
        else if(temp == "size"){
            cout << dq.size() << endl;
        }
        else if(temp == "empty"){
            if(dq.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(temp == "front"){
            cout << dq.front() << endl;
        }
        else if(temp == "back"){
            cout << dq.back() << endl;
        }
        
    }


    return 0;
}