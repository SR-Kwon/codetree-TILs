#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, v, t, change = 0;
    cin >> n >> m;
    vector<int> A = {0}, B = {0};
    vector<char> winner;
    for(int i = 0; i < n; i++){
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            A.push_back(A.back() + v);
        }
    }
    for(int i = 0; i < m; i++){
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            B.push_back(B.back() + v);
        }
    }

    for(int i = 0; i < A.size(); i++){
        if(A[i] == B[i]) winner.push_back('=');
        else if(A[i] > B[i]) winner.push_back('A');
        else if(A[i] < B[i]) winner.push_back('B');
    }
    char temp = winner[0];
    for(int i = 0; i < winner.size(); i++){
        if(winner[i] == temp){}
        else{    
            temp = winner[i];
            change++;
        }
    }

    cout << change;

    return 0;
}