#include <iostream>
using namespace std;

// 곱셉 중간식 출력 ex) 123 * 345 => 123*5 , 123*4 , 123*3

int main() {
	int a;
	int b;

	cin >> a;
	cin >> b;

	int c = b%10;  // 첫 자리
	int d = ((b%100)-c)/10; // 둘째 자리
	int e = b/100;

	cout << a*c << endl;
	cout << a*d << endl;
	cout << a*e << endl;
	cout << a*b << endl;
}
