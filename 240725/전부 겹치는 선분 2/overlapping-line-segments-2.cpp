#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x1, x2;
    vector<int> lines[n];
    cin >> n;

    int min, max, count = 0;
    cin >> min >> max;

    for(int i = 0; i < n-1; i++){
        cin >> x1 >> x2;
        //왼쪽
        if(x1 <= min && x2 < max && x2 >= min){
            min = x1;
        }
        //오른쪽
        else if(min < x1 && max <= x2 && x1 <= max){
            max = x2;
        }
        //안쪽
        else if(min <= x1 && x2 <= max){
            //pass
        }
        //바깥
        else if(min > x1 && x2 > max){
            min = x1;
            max = x2;
        }
        //안겹침
        else{
            count++;
        }
    }

    if(count > 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}