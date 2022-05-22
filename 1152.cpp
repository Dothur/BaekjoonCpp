#include <iostream>
#include <string>
using namespace std;
// 단어의 개수 구하기
int main() {
	string str;
	getline(cin, str);  // 공백을 포함한 문자열을 받아야해서 getline

	int cnt = 0;
	if(str.empty()) cout << "0";
	cnt = 1;
	for(int i=0; i<str.length(); i++) {
		if(str[i] == ' ') cnt++;
	}
	if(str[0] == ' ') // 문자열 처음에 공백이 있을때
		cnt--;
	if(str[str.length()-1] == ' ') // 문자열 마지막에 공백이 있을때
		cnt--;

	cout << cnt;
}
