#include <iostream>
#include <vector>
using namespace std;

int is_happy(int m, vector<int> line){
    int count = 1;

    for(int i = 1; i < line.size(); i++){
        if(line[i] == line[i - 1]){
            count++;
        }
        else{
            count = 1;
        }
    }

    if(count >= m) return 1;

    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int res = 0;

    for(int i = 0; i < n; i++){
        res += is_happy(m, arr[i]);
    }

    for(int i = 0; i < n; i++){
        vector<int> temp(n,0);
        for(int j = 0; j < n; j++){
            temp[j] = arr[j][i];
        }
        res += is_happy(m, temp);
    }
    
    cout << res;

    return 0;
}