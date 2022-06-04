#include <iostream>
using namespace std;
// 최소공배수
// ==== 유클리드 호제법을 사용====
// 1. 큰숫자를 작은숫자로 mod연산
// 2. 작은 숫자를 1번에서 구한 나머지 mod연산
// 3. 위 과정을 mod연산의 결과가 0이 나올때 까지 계속 반복
// 4. 이때 나누는 수로 사용된 수가 두 수의 최대공약수

int gcd(int a, int b) {  // 최대공약수
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}
int lcm(int a, int b) {  // 최소공배수
	return (a * b) / gcd(a,b);
}

int main() {
	int t;
	cin >> t;
	for(int i=0; i<t; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		cout << lcm(num1, num2) << '\n';
	}
}
