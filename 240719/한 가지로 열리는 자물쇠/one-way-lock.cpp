#include <iostream>
using namespace std;

int main() {
    int N, a, b, c, cnt = 0;
    cin >> N >> a >> b >> c;

    for(int i = 1; i <= N; i++){
        for(int t = 1; t <= N; t++){
            for(int j = 1; j <= N; j++){
                if((a - 2) <= i && i <= (a + 2)) continue;
                else if((b - 2) <= t && t <= (b + 2)) continue;
                else if((c - 2) <= j && j <= (c + 2)) continue;
                cnt++;
            }
        }
    }

    cout << N * N * N - cnt;


    return 0;
}