#include <iostream>
using namespace std;

int main() {
    int n, m, p;
    char his_name[m];
    int his_unseen[m];
    int stat[n] = {0}; //1읽음 0안읽음

    cin >> n >> m >> p;
    
    for(int i = 0; i < m; i++){
        cin >> his_name[i] >> his_unseen[i];
    }

    //p부터 읽었는지 확인
    //만약 읽지 않은사람이 0 이면 모두가 읽은거지
    //뒤에 메세지를 보냈으면 읽은거지 ㅇㅇ
    for(int i = p - 1; i < m; i++){
        stat[his_name[i] - 'A'] = 1;
        // cout << his_unseen[i] << endl;

        if(his_unseen[i] == 0){
            for(int t = 0; t < n; t++){
                stat[t] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(stat[i] == 0)
            cout << char(i + 'A') << ' ';
    }

    return 0;
}