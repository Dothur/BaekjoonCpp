#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// 최댓값구하기 use vector
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, max, max_index;
	vector<int>v(9);
	for(int i=0; i<9; i++){
		cin >> N;
		if(N<=0) break;
		else v[i] = N;
	}
	max = *max_element(v.begin(),v.end()); // vector 에서 max 값을찾는 구문
	cout << max << "\n";
	max_index = max_element(v.begin(), v.end())-v.begin(); // vector 에서 max 값의 인덱스를 찾는구문
	cout << max_index + 1 << "\n"; // 문제는 index 값이 아닌 입력한 숫자중 몇번째 인지 이므로 + 1
}

