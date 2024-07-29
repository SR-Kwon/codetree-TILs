#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    string seats;
    cin >> seats;

    vector<int> occupied;
    for (int i = 0; i < N; i++) {
        if (seats[i] == '1') {
            occupied.push_back(i);
        }
    }

    int max_distance = 0;

    for (int i = 0; i < N; i++) {
        if (seats[i] == '0') {
            int min_distance = N;
            for (int j = 0; j < occupied.size(); j++) {
                int distance = abs(i - occupied[j]);
                if (distance < min_distance) {
                    min_distance = distance;
                }
            }
            if (min_distance > max_distance) {
                max_distance = min_distance;
            }
        }
    }

    cout << max_distance << endl;

    return 0;
}