#include <iostream>
using namespace std;
// 블랙잭 (모든 경우의 수)
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m, res = 0;
	int arr[101] = {0};
	cin >> n >> m;
	for(int i=0; i<n; i++) cin >> arr[i];

	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			for(int k=j+1; k<n; k++) {
				int hap = arr[i]+arr[j]+arr[k];
				if(hap<=m && hap>res)
					res = hap;
			}
		}
	}
	cout << res;
}
