#include <iostream>
#include <algorithm>
using namespace std;

int lines_x1[100] = {0};
int lines_x2[100] = {0};

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> lines_x1[i] >> lines_x2[i];

    int min_len = 101;
    int temp_x1, temp_x2, min, max;
    for(int i = 0; i < n; i++){
        temp_x1 = lines_x1[i], temp_x2 = lines_x2[i];
        lines_x1[i] = 999, lines_x2[i] = -1;

        int min = *min_element(lines_x1, lines_x1 + n);
        int max = *max_element(lines_x2, lines_x2 + n);

        int len = max - min;
        if(len < min_len) min_len = len;

        lines_x1[i] = temp_x1, lines_x2[i] = temp_x2;
    }

    cout << min_len;
    return 0;
}