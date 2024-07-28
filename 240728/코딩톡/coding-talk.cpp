#include <iostream>
using namespace std;

int main() {
    int n, m, p;
    char his_name[m];
    int his_unseen[m];

    cin >> n >> m >> p;
    
    for(int i = 0; i < m; i++){
        cin >> his_name[i] >> his_unseen[i];
    }

    //p부터 읽었는지 확인
    //만약 읽지 않은사람이 0 이면 모두가 읽은거지
    if(his_unseen[p - 1] == 0){
        return 0;
    }

    for(int i = 0; i < n; i++){
        char person = 'A' + i;
        bool read = false;

        // 만약 p번 메시지를 읽은 사람 수와 같은 채팅을 기준으로
        // 한번이라도 채팅을 쳤다면 확실하게 채팅을 읽었습니다.
        for(int i = 0; i < m; i++){
            if(his_unseen[i] >= his_unseen[p - 1] && his_name[i] == person){
                read = true;
                break;
            }
        }

        if(!read){
            cout << person << ' ';
        }
    }

    return 0;
}