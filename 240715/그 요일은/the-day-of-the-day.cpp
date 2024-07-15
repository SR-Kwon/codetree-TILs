#include <iostream>
#include <vector>
using namespace std;

int day_per_month(int month){
    switch(month){
        case 1:
            return 31;
        case 2:
            return 29;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        case 12:
            return 31;
    }
}

int day_to_num(string day) {
    if (day == "Mon")
        return 0;
    else if (day == "Tue")
        return 1;
    else if (day == "Wed")
        return 2;
    else if (day == "Thu")
        return 3;
    else if (day == "Fri")
        return 4;
    else if (day == "Sat")
        return 5;
    else if (day == "Sun")
        return 6;
    else
        return -1;
}

int count_day(int from_month, int from_date, int to_month, int to_date){
    int count = 1;
    for(int i = from_month; i < to_month; i++){
        count += day_per_month(i);
    }

    return count += to_date - from_date;
}

int main() {
    int from_month, from_date, to_month, to_date, remain, ito = 0;
    string target;
    vector<int> count = {0,0,0,0,0,0,0};

    cin >> from_month >> from_date >> to_month >> to_date >> target;
    remain = count_day(from_month, from_date, to_month, to_date);
    while(remain > 0){

        count[ito++ % 7]++;
        remain--;
    }

    cout << count[day_to_num(target)];

    // for(int i = 0; i < count.size(); i++){
    //     cout << count[i] << ' ';
    // }

    return 0;
}