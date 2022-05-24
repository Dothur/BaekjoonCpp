#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 수 정렬하기 1
int main() {
	int n, su;
	cin >> n;
	vector<int> v;
	for(int i=0; i<n; i++) {
		cin >> su;
		v.push_back(su);
	}
	sort(v.begin(), v.end());

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << "\n";
	}
}

