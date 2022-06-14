#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// 팰린드롬인지 아닌지
int main() {
	string str; 
	cin >> str;
	string tmp = str;
	reverse(tmp.begin(), tmp.end());

	if(str == tmp) cout << 1 << '\n';
	else cout << 0 << '\n';
}

