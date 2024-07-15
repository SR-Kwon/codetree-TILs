#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const vector<int>& a, const vector<int>& b) {
    if (a[0] != b[0])
        return a[0] < b[0];
    else
        return a[1] > b[1];
}

int main() {
    int n;
    int number = 1, h, w;
    vector<vector<int>> student;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> h >> w;
        vector<int> temp = {h, w, number};
        student.push_back(temp);
        number++;
    }

    sort(student.begin(), student.end(), compare);

    for(int i = 0; i < student.size(); i++){
        for(int t = 0; t < student[i].size(); t++){
            cout << student[i][t] << ' ';
        }
        cout << endl;
    }

    return 0;
}