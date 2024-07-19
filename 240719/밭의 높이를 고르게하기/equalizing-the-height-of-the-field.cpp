#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, H, T;
    cin >> N >> H >> T;
    int ground[N];
    vector<int> res;

    for(int i = 0; i < N; i++){
        cin >> ground[i];
    }
    
    for(int i = 0; i < N - T; i++){
        int cost = 0;
        for(int t = 0; t < T; t++){
            cost += abs(ground[i + t] - H);
        }
        res.push_back(cost);
    }

    int min = *min_element(res.begin(), res.end());
    cout << min;

    return 0;
}