#include <iostream>
using namespace std;
// 누적 합 구하기
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,m;
	cin >> n >> m;
	int arr[100001];
	int hap[100001];

	for(int i=1; i<= n; i++){
		int a;
		cin >> a;
		arr[i] = a;
		hap[i] = a+hap[i-1];
	}
	for(int i=0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		cout << hap[b]-hap[a-1] << '\n';
	}
}
