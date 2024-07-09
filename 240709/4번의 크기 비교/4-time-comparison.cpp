#include <iostream>
using namespace std;


int main() {
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    b = a > b ? 1 : 0;
    c = a > c ? 1 : 0;
    d = a > d ? 1 : 0;
    e = a > e ? 1 : 0;
    cout << b << endl << c << endl << d << endl << e << endl;

    return 0;
}