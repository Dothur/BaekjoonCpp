#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 평균 구하기
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> v;
	int N = 0;
	cin >> N;	

	double max = 0;

	for(int i=0; i<N; i++) {
		int score = 0;
		cin >> score;

		v.push_back(score);
		if(max < score) max = score;
	}
	double hap = 0;
	for(int i =0; i<N; i++) {
		hap +=((double)v[i] / max);
	}
	cout << hap/N*100;
}

