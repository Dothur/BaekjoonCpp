#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 42로 나눠서 서로다른 나머지가 몇개?
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> v(43,0);
	vector<int> a(10,0);
	int set=0;
   	int cnt=0;
	for(int i=0; i <10; i++) {
		cin >> a[i];
	}
	for(int j=0; j <10; j++) {
		set = a[j] % 42;
		v[set]++;
	}
	for(int k=0; k<43; k++) {
		if(v[k] > 0) cnt++;
	}
	cout << cnt;
}

