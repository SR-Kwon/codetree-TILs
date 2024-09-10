#include <iostream>
#include <string>
#include <vector>
using namespace std;

string line;
int length;

void shift_line(){
    // 끝에가 앞으로
    char temp = line.back();
    for(int i = length - 1; i > 0; i--){
        line[i] = line[i - 1];
    }
    line[0] = temp;
}

int get_RunLength(){ //aaabbbbcaa
    int len = 0;
    vector<int> counts(10, 0);
    char prev = line[0];
    int kinds = 0;
    counts[kinds]++;
    for(int i = 0; i < length - 1; i++){
        if(line[i] == line[i + 1]){
            counts[kinds]++;
        }
        else{
            kinds++;
            counts[kinds]++;
        }
    }
    
    if(counts[0] == 10){
        len = 3;
    }
    else{
        for(int i = 0; i < counts.size(); i++){
            if(counts[i] == 0) break;
            else len += 2;
        }
    }
    
    return len;
}


    
int main() {
    
    cin >> line;
    
    length = line.length();
    
    int min = 99999;
    
    for(int i = 0; i < length; i++){
        shift_line();
        int temp = get_RunLength();
        min = (temp < min) ? temp : min;
    }
    
    cout << min;
    
    return 0;
}