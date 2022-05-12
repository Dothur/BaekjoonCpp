#include <iostream>
#include <vector>
#include <string>
using namespace std;
// OX 퀴즈  O -> 1 | OO -> 1+2 | OOO -> 1+2+3 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N,score,a;

	cin >> N;

	vector<string> v;
	string tmp="";

	for(int i=0; i<N; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	for(int i=0; i<N; i++) {
		a=0;
		score=0;
		tmp = v[i];
		for(int j=0; j<tmp.length(); j++) {
			if(tmp[j] == 'O') {
				score++;
				a += score;
			}
			else score = 0;
		}
		cout << a << "\n";
	}
	return 0;
}
