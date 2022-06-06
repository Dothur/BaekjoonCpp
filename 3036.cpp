#include <iostream>
using namespace std;
// 링
int gcd(int a, int b) {  // 최대공약수
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}
int main() {
	int n, a;
	int arr[101];
	cin >> n;

	for(int i=0; i<n; i++)
		cin >> arr[i] ;
	for(int i=1; i<n; i++) {
		a = gcd(arr[0], arr[i]);
		cout << arr[0]/a << "/" << arr[i]/a << '\n';
	}
}
