#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<string> min = {"9999-99-99", " ", " "};

    for(int i = 0; i < n; ++i){
        string date, day, weather;
        cin >> date >> day >> weather;

        if(weather == "Rain" && min[0] > date){
            vector<string> temp = {date, day, weather};
            min = temp;
        }
    }

    cout << min[0] << ' ' << min[1] << ' ' << min[2] << endl;

    return 0;
}