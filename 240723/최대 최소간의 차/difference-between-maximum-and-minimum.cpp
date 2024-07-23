#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_K 10000

using namespace std;

int n, k;
int arr[MAX_N];

int GetCost(int low, int high){
    int cost = 0;

    // 각 수에 대해 low ~ high 사이로 바꾸는데 드는 cost를 계산해줌
    for(int i = 0; i < n; i++){
        // low보다 작을 경우 low로 만들어 주는게 최소 cost
        if(arr[i] < low)    cost += low-arr[i];
        // high보다 큰 경우 high로 만들어 주는게 최소 cost
        if(arr[i] > high)   cost += arr[i]-high;
        // 그 외의 경우는 이미 구간 안에 있기 때문에 cost가 필요하지 않음
    }
    return cost;
}
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 999999999;
    // 모든 구간 쌍 (num, num+k)를 잡아보면서
    // 그 구간으로 만들기 위한 비용을 계산하여
    // 그 중 최솟값을 계산
    for(int num = 1; num <= MAX_K; num++)
        ans = min(ans, GetCost(num, num + k));
    cout << ans;
}