#include <iostream>
using namespace std;

// A+B 입력받은 횟수만큼 식을 받아서 출력

int main() {
	int t, a, b;
	cin >> t;
	for(int i=1; i<=t; i++) {
		cin >> a >> b;
		cout << a+b << endl;
	}
}

