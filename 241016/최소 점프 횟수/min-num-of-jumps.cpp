#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 10

using namespace std;

int n;
int num[MAX_N];

int ans = INT_MAX;

void FindMin(int idx, int cnt){
    // 마지막 위치를 넘었을 때 그 중 최소 이동 횟수를 갱신
    if(idx >= n-1){
        ans = min(ans, cnt);
        return;
    }
    for(int dist = 1; dist <= num[idx]; dist++)
        FindMin(idx+dist, cnt+1);
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> num[i];

    FindMin(0,0);

    if(ans == INT_MAX)
        ans = -1;
    cout << ans;
    return 0;
}