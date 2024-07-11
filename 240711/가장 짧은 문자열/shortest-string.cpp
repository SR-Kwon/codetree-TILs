#include <iostream>
using namespace std;

int main() {
    string str1, str2, str3;
    
    cin >> str1 >> str2 >> str3;
    
    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();
    
    int max_length = max(len1, max(len2, len3));
    int min_length = min(len1, min(len2, len3));
    int length_difference = max_length - min_length;

    cout << length_difference << endl;
    
    return 0;
}