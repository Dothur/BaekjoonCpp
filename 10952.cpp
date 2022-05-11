#include <iostream>
using namespace std;

// A+B 입력받은 횟수만큼 식을 받아서 출력 0 0 을 입력하면 종료

int main() {
	int a, b;
	while(true){
		cin >> a >> b;
		if(a==0 && b==0) break;
		cout << a+b << endl;
	}
}

