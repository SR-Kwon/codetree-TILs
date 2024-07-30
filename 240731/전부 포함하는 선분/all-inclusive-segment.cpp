#include <iostream>
#include <algorithm>
using namespace std;

int lines_x1[100] = {0};
int lines_x2[100] = {0};

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> lines_x1[i] >> lines_x2[i];

    int min_len = 101;
    int temp_x1, temp_x2, min, max;
    for(int i = 0; i < n; i++){
        temp_x1 = lines_x1[i], temp_x2 = lines_x2[i];
        lines_x1[i] = 999, lines_x2[i] = -1;

        int min = *min_element(lines_x1, lines_x1 + n);
        int max = *max_element(lines_x2, lines_x2 + n);

        int len = max - min;
        if(len < min_len) min_len = len;

        lines_x1[i] = temp_x1, lines_x2[i] = temp_x2;
    }

    cout << min_len;
    return 0;
}

/*

해설은 가장 작은x1또는 가장 큰 x2를 가진애를 없애서 구했다
시간복잡도 O(N)으로 끝낸다.

#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int n;
int x1[MAX_N], x2[MAX_N];
int ans = INT_MAX;

int main() {
    // 입력
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x1[i] >> x2[i];
    
    // 가장 시작점이 작은 선분을 지우거나, 가장 끝점이 큰 선분을 지울 때에만
    // 전부 포함하는 선분이 줄어들 가능성이 있습니다.
    // 가장 시작점이 작은 선분을 찾습니다.
    int skip = 0;
    for(int i = 0; i < n; i++) {
        if(x1[skip] > x1[i]) skip = i;
    }
    
    int max_x2 = 0;
    int min_x1 = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(i == skip) continue;

        // 시작점 중 가장 앞에 있는 좌표와 끝점 중 가장 뒤에 있는 점의 좌표를 확인합니다.
        max_x2 = max(max_x2, x2[i]);
        min_x1 = min(min_x1, x1[i]);
    }

    // 조건을 만족하는 선분의 길이는 max_x2 - min_x1입니다.
    // 정답보다 이 선분의 길이가 작으면 업데이트합니다.
    ans = min(ans, max_x2 - min_x1);


    // 가장 끝점이 큰 선분을 찾습니다.
    skip = 0;
    for(int i = 0; i < n; i++) {
        if(x2[skip] < x2[i]) skip = i;
    }
    
    max_x2 = 0;
    min_x1 = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(i == skip) continue;

        // 시작점 중 가장 앞에 있는 좌표와 끝점 중 가장 뒤에 있는 점의 좌표를 확인합니다.
        max_x2 = max(max_x2, x2[i]);
        min_x1 = min(min_x1, x1[i]);
    }

    // 조건을 만족하는 선분의 길이는 max_x2 - min_x1입니다.
    // 정답보다 이 선분의 길이가 작으면 업데이트합니다.
    ans = min(ans, max_x2 - min_x1);

    cout << ans;
    return 0;
}
*/