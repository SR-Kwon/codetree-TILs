#include <iostream>
using namespace std;

int main() {
    int A, B, x, y, temp, min_dis = 999;
    cin >> A >> B >> x >> y;

    // 1. 순간이동 안하는 경우
    temp = abs(B - A);
    min_dis = min(min_dis, temp);
    // 2. A -> x -> y -> B 인경우
    temp = abs(A - x) + abs(B - y);
    min_dis = min(min_dis, temp);
    
    // 3. y -> x 인경우
    temp = abs(A - y) + abs(B - x);
    min_dis = min(min_dis, temp);

    cout << min_dis;

    return 0;
}