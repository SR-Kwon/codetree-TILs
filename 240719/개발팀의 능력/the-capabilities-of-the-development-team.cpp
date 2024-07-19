#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    vector<int> numbers(5);
    for(int i = 0; i < 5; i++)
        cin >> numbers[i];

    int min_diff = numeric_limits<int>::max();
    vector<int> sums;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            sums.push_back(numbers[i] + numbers[j]);
        }
    }

    for (int i = 0; i < sums.size(); i++) {
        for (int j = i + 1; j < sums.size(); j++) {
            vector<int> teams = {sums[i], sums[j]};
            int total_sum = 0;
            for (int k = 0; k < 5; k++) {
                total_sum += numbers[k];
            }
            int remaining_sum = total_sum - sums[i] - sums[j];
            teams.push_back(remaining_sum);

            sort(teams.begin(), teams.end());
            if (teams[0] != teams[1] && teams[1] != teams[2]) {
                int current_diff = teams[2] - teams[0];
                min_diff = min(min_diff, current_diff);
            }
        }
    }

    if (min_diff == numeric_limits<int>::max()) {
        cout << -1 << endl;
    } else {
        cout << min_diff << endl;
    }

    return 0;
}