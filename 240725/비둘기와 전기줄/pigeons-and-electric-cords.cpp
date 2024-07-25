#include <iostream>
using namespace std;

int main() {
    int n, name, dir, count = 0;
    cin >> n;

    int stat[11] = {0};
    int cnt[11] = {0};

    for(int i = 0; i < n; i++){

        cin >> name >> dir;

        if(cnt[name] == 0){
            stat[name] = dir;
            cnt[name] = 999;
        }
        else{
            if(stat[name] == dir){
             //pass   
            }
            else{
                stat[name] = dir;
                count++;
            }
        }
    }

    cout << count;
    
    return 0;
}