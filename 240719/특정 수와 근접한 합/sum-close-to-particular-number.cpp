#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, S, all = 0;
    vector<int> sums;

    cin >> N >> S;
    int num[N];

    for(int i = 0; i < N; i++){
        cin >> num[i];
        all += num[i];
    }

    for(int i = 0; i < N - 1; i++){
        for(int t = i + 1; t < N; t++){
            sums.push_back(all - num[i] - num[t]);
            // cout << all - num[i] - num[t] << ' ';
        }
    }

    int min_index, min_dif = 999999;
    for(int i = 0; i < sums.size(); i++){
        if(abs(sums[i] - S) < min_dif){
            min_dif = abs(sums[i] - S);
            min_index = i;

        }
    }

    cout << min_dif;

    return 0;
}