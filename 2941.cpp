#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// 크로아티아 알파벳
int main() {
	int index;
	vector<string> v = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	string s;
	cin >> s;

	for(int i=0; i<v.size(); i++) {
		while(true) {
			index = s.find(v[i]);
			if(index == string::npos) break;      // 찾는문자열이 없는경우
		    s.replace(index, v[i].size(), "a"); // string::npos 를 반환
		}
	}
	cout << s.size();
}
