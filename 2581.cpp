#include <iostream>
using namespace std;
// 소수
int main() {
	int m, n;
	int res = 0;
	int cnt = 0;
	int min = -1;
	cin >> m >> n;
	
	for(int i=m; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			if(i%j == 0) cnt++;
		}
		if(cnt == 2) {
			if(min == -1)
				min = i;
			res += i;
		}
		cnt = 0;
	}
	if(min == -1) cout << -1;
	else cout << res << '\n' << min;
}

