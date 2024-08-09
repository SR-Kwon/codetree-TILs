#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> arr;
    int n;
    cin >> n;

    string cmd;
    int temp;

    for(int i = 0; i < n; i++){
        cin >> cmd;

        if(cmd == "push_back"){
            cin >> temp;
            arr.push_back(temp);
        }
        else if(cmd == "get"){
            cin >> temp;
            cout << arr[--temp] << endl;
        }
        else if(cmd == "size"){
            cout << arr.size() << endl;
        }
        else if(cmd == "pop_back"){
            arr.pop_back();
        }
    }
    return 0;
}