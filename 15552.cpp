#include <iostream>
using namespace std;
// 빠른 a+b
int main() {
	 // * c++ 입출력 속도를 가속 시키기 위한 코드
	ios::sync_with_stdio(0);
    // 1. C 표준 stream과 C++ 표준 stream의 동기화를 끊는다.
    cin.tie(0); cout.tie(0);
    // 2. cin을 cout으로부터 untie
    //    stream을 tie하면 다른 stream에서
    //    입출력요청이 오기전에 stream을 flush시킴
	int t, a, b;
	cin >> t;
	for(int i=1; i<=t; i++) {
		cin >> a >> b;
		cout << a+b << "\n";
	}
}
