#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, tar, counter = 0, temp;
    cin >> n >> tar;
    vector<int> res;

    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp <= tar){
            counter = 0;
        }
        else{
            counter++;
        }
        res.push_back(counter);
    }

    int max = 0;
    for(int i = 0; i < res.size(); i++){
        if(res[i] > max) max = res[i];
    }

    cout << max;
    
    return 0;
}