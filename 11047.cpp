#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 동전 0 
int main() {
	int n, k;
	cin >> n >> k;

	vector<int> v;
	int coin;
	for(int i=0; i<n; i++) {
		cin >> coin;
		v.push_back(coin);
	}
	sort(v.begin(), v.end(), greater<int>()); //내림차순
	
	int cnt = 0;
	for(int i=0; i<v.size(); i++) {
		while(k-v[i] >= 0) {
			cnt++;
			k -= v[i];
		}
	}
	cout << cnt;
}
