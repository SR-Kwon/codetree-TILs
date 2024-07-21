#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    vector<pair<int, int>> wishes;
    for (int i = 0; i < n; i++) {
        int price, shipping;
        cin >> price >> shipping;
        wishes.push_back({price, shipping});
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        vector<pair<int, int>> tmp(wishes);

        tmp[i].first /= 2;

        vector<int> prices;
        for (int k = 0; k < n; k++) {
            prices.push_back(tmp[k].first + tmp[k].second);
        }
        sort(prices.begin(), prices.end());

        int student = 0, cnt = 0;
        for (int x = 0; x < n; x++) {
            if (cnt + prices[x] > b) {
                break;
            }
            cnt += prices[x];
            student++;
        }
        ans = max(ans, student);
    }

    cout << ans;

    return 0;
}