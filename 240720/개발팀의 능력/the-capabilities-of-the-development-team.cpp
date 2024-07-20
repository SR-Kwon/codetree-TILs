#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int members[5];
int remain[4];

int Get_diff(int a, int b, int c){
    int sum1 = members[a];
    int sum2 = remain[b] + remain[c];
    int sum3 = 0;
    
    for(int k = 0; k < 4; k++)
        sum3 += remain[k];
    sum3 -= sum2;
    int min_ab = min(sum1, min(sum2, sum3));
    int max_ab = max(sum1, max(sum2, sum3));

    if(sum1 == sum2 || sum1 == sum3 || sum2 == sum3)
        return 999999;

    return abs(min_ab - max_ab);

}


int main() {
    for(int i = 0; i < 5; i++)
        cin >> members[i];
    
    int min_diff = 999999;

    for(int i = 0; i < 5; i++){

        int one = members[i];

        for (int j = 0, k = 0; j < 5; j++) {
            if (j != i) {
                remain[k++] = members[j];
            }
        }

        for(int j = 0; j < 4; j++)
            for(int t = j + 1; t < 4; t++)
                min_diff = min(min_diff, Get_diff(i, j, t));
    }

    min_diff = min_diff == 999999? -1 : min_diff;
    cout << min_diff;
    return 0;
}