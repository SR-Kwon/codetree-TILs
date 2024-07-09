#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
	
	for(int i = 0; i < 2 * n; i++) {
		if(i % 2 == 1) {
			for(int k = 0; k < 1 + i / 2; k++)
				cout << "* ";
		}
		else {
			for(int k = 0; k < n - i / 2; k++)
				cout << "* ";
		}
		cout << endl;
	}

    return 0;
}