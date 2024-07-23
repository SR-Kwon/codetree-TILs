#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int m;

int get_move(int start){
    int sum = 0;
    int current = start;

    for(int i = 0; i < m; i++){
        //받은 인덱스에 있는 수를 가져옴
        int next = v[current - 1];
            //만약 이미 가있다면 break 한다.
        // if(next == current){
        //     break;
        // }
            //아니면 sum에 더해준다.
        // else{
            sum += current;
        // }
        //가야하는곳에 있던 수를 다음에 사용할수 있게 start로 바꿔준다.
        current = next;
        // //해당 수가 가야하는곳으로 옯겨준다.
        // v[temp - 1] = temp;
    }

    return sum;
}


int main() {
    int n, max_sum = -1;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    for(int i = 1; i < n + 1; i++){
        int current_sum =  get_move(i);
        if(current_sum > max_sum){
            max_sum = current_sum;
        }
    }

    cout << max_sum;

    return 0;
}