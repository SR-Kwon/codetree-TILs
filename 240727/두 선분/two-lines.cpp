#include <iostream>
using namespace std;

int main() {
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    bool state = false;
    // 왼쪽에 걸친경우
    if(x1 < x3 && x3 <= x2 && x2 <= x4){
        state = true;
    }
    // 오른쪽에 걸친경우
    else if(x3 <= x1 && x1 <= x4 && x4 < x2){
        state = true;
    }
    // 안쪽인경우
    else if(x3 <= x1 && x2 <= x4){
        state = true;
    }
    // 바깥인경우
    else if(x1 <= x3 && x4 <= x2){
        state = true;
    }

    if(state)cout << "intersecting";
    else cout << "nonintersecting";

    return 0;
}