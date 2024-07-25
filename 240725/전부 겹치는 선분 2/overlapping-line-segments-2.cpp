#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int line[101];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            line[i]++;
        }
    }

    for(int i=2;i<=100;i++){
        if(line[i]==n){
            
            cout<<"Yes";
            return 0;
        }
    }

    cout<<"No";

    return 0;
}