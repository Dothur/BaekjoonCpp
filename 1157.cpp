#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
// 단어공부 / 문자열에서 가장많이 사용된 알파벳 출력
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string str;
	cin >> str;
	vector<int> alphabet(26, 0);

	for(int i=0; i<str.size(); i++) {
		if(str[i] > 96)
			alphabet[str[i]-97]++; 
		else
			alphabet[str[i]-65]++;
	}

	int cnt = 0;
	int asc = 0;
	int max_index = *max_element(alphabet.begin(),alphabet.end());

	for(int i=0; i<26; i++){
		if(max_index == alphabet[i]){
			cnt++;
			asc = i;
		}
	}
	if(cnt > 1) cout << "?";
	else cout << static_cast<char>(asc+65);
}

