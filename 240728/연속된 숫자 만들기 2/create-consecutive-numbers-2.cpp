#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int pos[3], cnt = 0;
    cin >> pos[0] >> pos[1] >> pos[2];
    sort(pos, pos + 3);

    // 1. 맞으면 출력
    if((pos[1] - pos[0]) == 1 && (pos[2] - pos[1]) == 1){
        cnt = 0;
    }
    // 2. 01, 12 사이 거리가 1이면 한번이면 끝나지
    else if((pos[1] - pos[0]) == 2 || (pos[2] - pos[1]) == 2){
        cnt = 1;
    }
    // 3. 01, 12사이의 거리가 뭐든간에 2번이면 끝
    else{
        cnt = 2;
    }

    cout << cnt;

    return 0;
}