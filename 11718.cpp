#include <iostream>
#include <string>
using namespace std;
// 그대로 출력하기
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string str;
	while(1) {
		getline(cin, str);
		if(str == "") break;
		cout << str << "\n";
	}
}

