#include <iostream>
using namespace std;

int main() {
    bool state = false;
    int x1, y1, x2, y2;
    int a1, b1, a2, b2;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    if(x2 < a1) state = true;
    else if(a2 < x1) state = true;
    else if(b2 < y1) state = true;
    else if(y2 < b1) state = true;

    if(state) cout << "nonoverlapping";
    else cout << "overlapping";

    return 0;
}