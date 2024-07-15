#include <iostream>
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

int count_day(int from_month, int from_date, int to_month, int to_date){
    int count = 0;
    for(int i = from_month; i < to_month; i++){
        count += day_per_month(i);
    }

    return count += to_date - from_date;
}

int main() {
    int from_month, from_date, to_month, to_date;

    cin >> from_month >> from_date >> to_month >> to_date;

    cout << count_day(from_month, from_date, to_month, to_date) % 7;

    return 0;
}