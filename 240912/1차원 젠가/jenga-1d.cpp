#include <iostream>
#include <vector>
using namespace std;

vector<int> jenga;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        jenga.push_back(temp);
    }

    for(int time = 0; time < 2; time++){
        int s, t;
        cin >> s >> t;
        vector<int> temp;
        for(int i = 0; i < jenga.size(); i++){
            if(i >= (s - 1) && i < t){
                continue;
            }
            temp.push_back(jenga[i]);
        }
        
        jenga = temp;
    }
    
    cout << jenga.size() << endl;
    
    for(int i = 0; i < jenga.size(); i++){
        cout << jenga[i] << endl;
    }
    
    return 0;
}