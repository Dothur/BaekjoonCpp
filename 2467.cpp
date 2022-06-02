#include <iostream>
#include <vector>
#include <algorithm>
#define M 2000000000 // -1,000,000,000 이상 1,000,000,000 이하
using namespace std;
// 용액
int main() {
	int n, res1, res2;
	cin >> n; 		  // 용액 수
	vector<int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	int first =0; // 이분탐색 first -> <- end
	int end = n-1;
	int min = M;  // 0 에 가장 가까웠던 합
	while(first < end) {
		int hap = v[first] + v[end];
		if(min > abs(hap)) { // 절대값으로 넣어야함!
			min = abs(hap);
			res1 = v[first];
			res2 = v[end];
			if(hap == 0)
				break;
		}
		if(hap < 0)
			first++;
		else
			end--;
	}
	cout << res1 << " " << res2;
}
