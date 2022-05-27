#include <iostream>
using namespace std;
// 셀프 넘버 ex) 33 => 33 + 3 + 3 = 39
int d(int n) {
	int sum = n;

	while(n > 0) {
		sum += (n%10);
		n /= 10;
	}
	return sum;
}
int main() {
	bool check[10001] = {0};       // false 

	for(int i = 1; i<10001; i++) { // 1부터 10000까지
		int res = d(i);            // d 함수로 리턴된 res
		if(res < 10001) {
			check[res] = 1;        // true
		}
	}

	for(int i = 1; i<10001; i++) {
		if(!check[i]) {            // false
			cout << i << '\n';
		}
	}
}

