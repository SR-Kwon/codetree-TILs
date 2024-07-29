#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;

    int t = 0;
    int left_dist = x;
    int v = 1;
    
    while(true){
        left_dist -= v;
        t++;
        if(left_dist == 0)
            break;

        // 속도를 더 높여도 괜찮은지 결정
        // 즉 남은 거리가 (v+1)*(v+2)/2보다 크거나 같아야 함
        if(left_dist >= (v+1)*(v+2)/2){v++;}

        // 속도를 유지해도 괜찮은지 결정
        // 즉 남은 거리가 v*(v+1)/2 보다 크거나 같아야 함
        else if(left_dist >= v*(v+1) / 2){ }
        
        // 위 둘을 만족하지 못하면 반드시 속도를 줄여야 함
        else v--;
    }
    cout << t;
    return 0;
}