#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    vector<int> res;
    cin >> a >> b >> c;

    for(int i = 0; i < (c / a) + 1; i++){
        for(int t = 0; t < (c / b) + 1; t++){
            //a 수 == i
            //b 수 == t 로 서로 곱해서 ㅇㅇ
            if((a * i + b * t) <= c){
                res.push_back((a * i + b * t));
            }
        }
    }
    int max = *max_element(res.begin(), res.end());
    cout << max;
    return 0;
}