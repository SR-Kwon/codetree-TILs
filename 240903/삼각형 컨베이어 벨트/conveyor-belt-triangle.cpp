//
//  main.cpp
//  Scratch_paper
//
//  Created by Alex Kwon on 9/3/24.
//


// 두개의 컨베이어 벨트위에 숫자 3개씩 있고 3초마다 rotate한다.
// 입력 : n (길이), t (시간)
// 1 2 3
// 6 5 1

// con2의 맨뒤가 con1의 맨앞으로 가고 con1의 맨뒤가 con2의 맨앞으로 가면 되겠네 ㅇㅇ.


#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>> fac){
    vector<int> con1 = fac[0];
    vector<int> con2 = fac[1];
    vector<int> con3 = fac[2];
    
    int temp1 = con1.back();
    int temp2 = con2.back();
    int temp3 = con3.back();
    for(int i = con1.size() - 1; i > 0; i--){
        con1[i] = con1[i - 1];
        con2[i] = con2[i - 1];
        con3[i] = con3[i - 1];
    }

    con1[0] = temp3;
    con2[0] = temp1;
    con3[0] = temp2;
    
    return {con1, con2, con3};
}

int main() {
    int n, t;
    
    cin >> n >> t;
    
    vector<int> con1(n);
    vector<int> con2(n);
    vector<int> con3(n);
    vector<vector<int>> temp(3);
    
    for(int i = 0; i < n; i++){
        cin >> con1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> con2[i];
    }
    for(int i = 0; i < n; i++){
        cin >> con3[i];
    }
    
    while(t >= 1){
        
        temp = rotate({con1, con2, con3});
        
        con1 = temp[0];
        con2 = temp[1];
        con3 = temp[2];
        
        t--;
    }
    
    for(int i = 0; i < n; i++){
        cout << con1[i] << ' ';
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << con2[i] << ' ';
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << con3[i] << ' ';
    }
    
    return 0;
}