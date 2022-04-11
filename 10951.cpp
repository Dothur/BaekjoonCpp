#include <iostream>
using namespace std;

// 여러개의 입력된 식을 각각 계산해서 출력

int main() {
	int a=0, b=0;
	while(cin >> a >> b) {  	 // <EOF> but cin 이 조건문 안에 있으면
		cout << a+b << '\n';     // 연산자 오버로딩에의해 bool 값으로
	}							 // true or false 값을 반환함
}
