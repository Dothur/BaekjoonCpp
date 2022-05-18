#include <iostream>
using namespace std;
// 소인수분해
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;   
			  // N이 1인경우 아무것도 출력하지않음
	for(int i=2; N>1;) {       // 소인수분해 2부터 시작
		if(N % i == 0) {       // i++를 for문에 적지않음
			cout << i << "\n"; // if문의 조건 i로 N을 나머지없이 나누면
			N /= i;			   // i 출력후 N을 i로 나눠주고 계속하고
		}					   // 안나눠지면 else문으로 i++ 시켜줌
		else i++;			   // 안나눠질때만 i++해주면서 i는 2부터 계속
	}
}

