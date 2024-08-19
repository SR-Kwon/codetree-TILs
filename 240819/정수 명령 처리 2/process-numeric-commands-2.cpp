#include <iostream>
#include <string>
#include <queue>

using namespace std;


int main() {
    
    queue<int> q;
    string line;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> line;
        if(line == "push"){
            int temp;
            cin >> temp;
            q.push(temp);
        }
        else if(line == "pop"){
            cout << q.front() << endl;
            q.pop();
        }
        else if(line == "size"){
            cout << q.size() << endl;
        }
        else if(line == "empty"){
            if(q.empty() == true){
                cout << 1 << endl;
            }
            else cout << 0 << endl;
        }
        else if(line == "front"){
            cout << q.front() << endl;
        }
    }

    return 0;
}