#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int numbers[6];


int GetDiff(int i, int j, int t) {
    int sum1 = numbers[i] + numbers[j] + numbers[t];
    int sum2 =  0;
    for(int k = 0; k < 6; k++)
        sum2 += numbers[k];
    sum2 -= sum1;
    return abs(sum1 - sum2);
}


int main() {
    for(int i = 0; i < 6; i++)
        cin >> numbers[i];

    int min_diff = 1000001;
    
    for(int i = 0; i < 6; i++)
        for(int j = i + 1; j < 6; j++)
            for(int t = j + 1; t < 6; t++)
                min_diff = min(min_diff, GetDiff(i, j, t));
    
    cout << min_diff;
    
    return 0;
}