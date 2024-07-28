#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int pos[3], cnt = 0;
    cin >> pos[0] >> pos[1] >> pos[2];
    sort(pos, pos + 3);

    while(true){
        // 1. 맞으면 유지
        if((pos[1] - pos[0]) == 1 && (pos[2] - pos[1]) == 1){
            cout << cnt;
            break;
        }
        // 2. 01, 12 사이 거리가 1이면 거기로 나머지 하나 넣기
        if((pos[1] - pos[0]) == 2){
            pos[2] = pos[1] - 1;
        }
        else if((pos[2] - pos[1]) == 2){
            pos[0] = pos[2] - 1;
        }
        // 3. 01, 12사이의 거리가 1이면 +2 하면 끝
        else if((pos[1] - pos[0]) == 1 || (pos[2] - pos[1]) == 1){
            cout << cnt + 2;
            break;
        }
        // 4. 01, 12 사이 거리중 작은곳에 홀수인경우(뒤에 가깝게)
        else if((pos[1] - pos[0]) >= (pos[2] - pos[1]) && (pos[2] - pos[1]) % 2 == 1){
            pos[0] = pos[1] + 1;
        }
        else if((pos[1] - pos[0]) < (pos[2] - pos[1]) && (pos[1] - pos[0]) % 2 == 1){
            pos[2] = pos[0] + 1;
        }
        // 5. 01, 12 사이 거리중 작은곳이 짝수인경우(앞에 가깝게)
        else if((pos[1] - pos[0]) >= (pos[2] - pos[1]) && (pos[2] - pos[1]) % 2 == 0){
            pos[0] = pos[1] + 1;
        }
        else if((pos[1] - pos[0]) < (pos[2] - pos[1]) && (pos[1] - pos[0]) % 2 == 0){
            pos[2] = pos[0] + 1;
        }
        sort(pos, pos + 3);
        // cout << pos[0] << ' ' << pos[1] << ' ' << pos[2] << endl;
        cnt++;
    }

    return 0;
}