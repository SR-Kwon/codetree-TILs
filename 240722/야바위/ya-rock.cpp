#include <iostream>
using namespace std;

class sell{
private:
    int arr[4];
    int cnt = 0;

public:
    sell(int num1, int num2, int num3){
        arr[1] = num1;
        arr[2] = num2;
        arr[3] = num3;
    }

    void swap(int from, int to){
        int temp = arr[from];
        arr[from] = arr[to];
        arr[to] = temp;
    }

    bool val_hit(int target){
        if(arr[target] == 1){
            cnt++;
            return true;
        }
        return false;
    }

    int get_cnt(){
        return cnt;
    }
};

int main() {
    int N;
    int a, b, c;

    cin >> N;

    sell case1(1,0,0);
    sell case2(0,1,0);
    sell case3(0,0,1);

    for(int i = 0; i < N; i++){
        cin >> a >> b >> c;

        case1.swap(a,b);
        case1.val_hit(c);
        
        case2.swap(a,b);
        case2.val_hit(c);

        case3.swap(a,b);
        case3.val_hit(c);
    }

    cout << max(case1.get_cnt(), max(case2.get_cnt(), case3.get_cnt()));
    return 0;
}