#include <iostream>
using namespace std;
// 더하기 사이클
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, X;
	int cnt = 0;
	cin >> N;
	X = N;
	if(N>=0 && N<=99) {
		do{
			X = (X%10) *10 + ((X/10)+(X%10)) %10;
			cnt++;
		}while(N != X);
		cout << cnt;
	}
	else return 0;
}

