#include <iostream>
using namespace std;
// 검증수 
int main() {
	int a,b,c,d,e, res;
	cin >> a >> b >> c >> d >> e;
	res = (a*a + b*b + c*c + d*d + e*e) % 10;
	cout << res;
}

