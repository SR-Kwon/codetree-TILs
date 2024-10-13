#include <iostream>
#include <algorithm>
#include <string>
#include <climits>

#define MAX_N 6

using namespace std;

int n = 6;

string expression;
int num[MAX_N];
int ans = INT_MIN;

int Conv(int idx) {
	return num[expression[idx] - 'a'];
}

int Calc() {
	int length = (int) expression.size();
	int value = Conv(0);
	for(int i = 2; i < length; i += 2) {
		if(expression[i - 1] == '+')
			value += Conv(i);
		else if(expression[i - 1] == '-')
			value -= Conv(i);
		else
			value *= Conv(i);
	}
	return value;
}

// 'a'부터 'f'까지 순서대로
// 0부터 5번째 index까지의 값을 
// 1~4 중에 하나로 채웁니다.
void FindMax(int cnt) {
	if(cnt == n) {
		ans = max(ans, Calc());
		return;
	}
	
	for(int i = 1; i <= 4; i++) {
		num[cnt] = i;
		FindMax(cnt + 1);
	}
}

int main() {
	cin >> expression;
	
	FindMax(0);
	cout << ans;
    
	return 0;
}