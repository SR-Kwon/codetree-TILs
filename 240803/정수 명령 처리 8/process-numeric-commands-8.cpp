#include <iostream>
#include <list>
#include <string>
using namespace std;
/*
push_front(E)
push_back(E)
pop_front() //반환 없음
pop_back() //반환 없음
size()
empty()
front()
back()
*/
int main() {
    int n, temp;
    cin >> n;
    string cmd;
    list<int> my_list;

    for(int i = 0; i < n; i++){
        cin >> cmd;

        if(cmd == "push_front"){
            cin >> temp;
            my_list.push_front(temp);
        }
        else if(cmd == "push_back"){
            cin >> temp;
            my_list.push_back(temp);
        }
        else if(cmd == "pop_front"){
            cout << my_list.front() << endl;
            my_list.pop_front();
        }
        else if(cmd == "pop_back"){
            cout << my_list.back() << endl;
            my_list.pop_back();
        }
        else if(cmd == "size"){
            cout << my_list.size() << endl;
        }
        else if(cmd == "empty"){
            cout << my_list.empty() << endl;
        }
        else if(cmd == "front"){
            cout << my_list.front() << endl;
        }
        else if(cmd == "back"){
            cout << my_list.back() << endl;
        }

    }

    return 0;
}