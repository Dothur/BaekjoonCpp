#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// ATM
int main() {
	int n, total=0, hap=0;
	int minute[1001] = {0};
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> minute[i];
	}
	sort(minute, minute + n); // 오름차순으로 정렬
	
	for(int i=0; i<n; i++) {
		total += minute[i];
		hap += total;
	}
	cout << hap;
}
