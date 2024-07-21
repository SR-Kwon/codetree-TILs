#include <iostream>
using namespace std;

bool is_pal(int n){
    string temp = to_string(n);

    for(int i = 0; i < temp.size(); i++){
        if (temp[i] != temp[temp.size()-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int x, y, cnt = 0;
    cin >> x >> y;

    for(int i = x; i <= y; i++){
        if(is_pal(i)) cnt++;
    }

    cout << cnt;

    return 0;
}