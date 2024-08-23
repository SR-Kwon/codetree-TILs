#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string cmd;

    unordered_map<int, int> m;

    for(int i = 0; i < n; i++){
        cin >> cmd;
        if(cmd == "add"){
            int k, v;
            cin >> k >> v;
            m[k] = v;
        }
        else if(cmd == "remove"){
            int k;
            cin >> k;

            m.erase(k);
        }
        else if(cmd == "find"){
            int k;
            cin >> k;

            if(m.find(k) != m.end()) cout << m[k] << endl;
            else cout << "None" << endl;
        }
    }

    return 0;
}