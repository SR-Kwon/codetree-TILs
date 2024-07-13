#include <iostream>
using namespace std;

bool is_leap(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int month_to_day(int year, int month){
    switch (month) {
        case 1: return 31;
        case 2: return is_leap(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0;
    }
}

string get_season(int month) {
    if (month >= 3 && month <= 5) {
        return "Spring";
    } else if (month >= 6 && month <= 8) {
        return "Summer";
    } else if (month >= 9 && month <= 11) {
        return "Fall";
    } else {
        return "Winter";
    }
}

bool is_valid_date(int year, int month, int day){
    if(month < 1 || month > 12){
        return false;
    }
    int days = month_to_day(year, month);
    return day > 0 && day <= days;
}


int main() {
    int Y, M, D;
    cin >> Y >> M >> D;

    if(!is_valid_date(Y, M, D)) {
        cout << -1 << endl;
    } else {
        cout << get_season(M) << endl;
    }

    return 0;
}