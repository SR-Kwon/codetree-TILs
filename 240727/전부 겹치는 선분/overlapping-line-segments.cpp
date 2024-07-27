#include <iostream>
using namespace std;

int x1, x2, x3, x4;

bool Intersecting(int x1, int x2, int x3, int x4) {
    // 겹치지 않는 경우에 대한 처리를 먼저 진행합니다.
    if(x2 < x3 || x4 < x1)
        return false;
    // 나머지는 전부 겹치는 경우라고 볼 수 있습니다.
    else
        return true;
}

int main() {
    int n;
    cin >> n;

    int points[n][2] = {0};
    
    for(int i = 0; i < n; i++){
        cin >> points[i][0] >> points[i][1];
    }

    bool state = true;
    for(int i = 0; i < n - 1; i++){
        for(int t = i; t < n; t++){
            if(Intersecting(points[i][0], points[i][1], points[t][0], points[t][1])){} //pass
            else state = false;
        }
    }


    if(state)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}