#include <iostream>
using namespace std;
// 수 정렬하기 3  카운팅정렬
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,su;
	cin >> n;
	int arr[10001] = {0}; // 10000 까지만

	for(int i=0; i<n; i++) {
		cin >> su;
		arr[su]++;
	}

	for(int i=1; i<10001; i++) {
		for(int j=0; j<arr[i]; j++) {
		cout << i << '\n';
		}
	}
}
