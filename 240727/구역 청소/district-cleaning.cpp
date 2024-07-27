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
    // 입력:
    cin >> x1 >> x2 >> x3 >> x4;

    // 겹치는지를 확인합니다.
    if(Intersecting(x1, x2, x3, x4))
        cout << max(x2, x4) - min(x1, x3);
    else
        cout << x2 + x4 - x3 - x1;
    return 0;
}