#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    vector<vector<string>> rain;
    vector<vector<string>> rain_date;

    cin >> n;

    for(int i = 0; i < n; ++i){
        string date, day, weather;
        cin >> date >> day >> weather;

        if(weather == "Rain"){
            vector<string> temp1 = {date, day, weather};
            rain.push_back(temp1);
        }
    }
    
    vector<string> min = {"9999-99-99", " ", " "};

    for(auto& i : rain) {
        if(i[0] < min[0]){min = i;}
    }

    cout << min[0] << ' ' << min[1] << ' ' << min[2] << endl;

    return 0;
}