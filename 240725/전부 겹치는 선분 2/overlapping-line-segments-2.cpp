#include <iostream>
using namespace std;

int main() {
    int n;
    int x1[100] = {0};
    int x2[100] = {0};

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> x1[i] >> x2[i];
    
    for(int i=0; i<n; i++){
        int arr[101] = {0}; 
        for(int j=0; j<n; j++){
            if(i==j) continue; //i번째 선분 제거

            for(int k=x1[j]; k<=x2[j]; k++)
                arr[k]++;
            
            for(int k=0; k<=100; k++){
                if(arr[k] == n-1){
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }
    cout << "No";

    return 0;
}