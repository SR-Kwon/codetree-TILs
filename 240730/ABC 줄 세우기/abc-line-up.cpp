#include <iostream>
#include <algorithm>
using namespace std;

void moveToFront(char arr[], int start, int end) {
    char temp = arr[end];
    for (int i = end; i > start; --i) {
        arr[i] = arr[i - 1];
    }
    arr[start] = temp;
}

int main() {
    int n;
    cin >> n;

    char seat[n];

    for (int i = 0; i < n; i++)
        cin >> seat[i];

    char temp[n];
    copy(seat, seat + n, temp);
    sort(temp, temp + n);

    char point = 'A';
    int cnt = 0;

    while (!equal(seat, seat + n, temp)) {
        for (int i = 0; i < n; ++i) {
            if (seat[i] == point) {
                moveToFront(seat, point - 'A', i);
                //현재 위치 - 가야하는 위치
                cnt += i - point + 'A';
                break;
            }
        }
        point++;
    }

    cout << cnt << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << seat[i] << " ";
    // }

    return 0;
}