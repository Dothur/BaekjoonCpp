#include <iostream>
using namespace std;
// 숫자의 합
int main() {
	int n;
	char ch;
	cin >> n;

	int hap = 0;

	for(int i=0; i<n; i++) {
		cin >> ch;
		hap += ch-48;
	}
	cout << hap;
}

