#include <iostream>
using namespace std;
// 평균 점수
int main() {
	int hap=0, n=0;
	for(int i=0; i<5; i++) {
		cin >> n;

		if(n<40) n=40;
		hap += n;
	}
	cout << hap/5;
}

