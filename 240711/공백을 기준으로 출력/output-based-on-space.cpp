#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    string line1, line2;

    getline(cin, line1);
    getline(cin, line2);

    line1.erase(remove(line1.begin(), line1.end(), ' '), line1.end());
    line2.erase(remove(line2.begin(), line2.end(), ' '), line2.end());

    cout << line1;
    cout << line2;
    return 0;
}