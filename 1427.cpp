#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// sort 내림차순
int main() { 
	int N;
	cin >> N;
	vector<int> v;

	while(N > 0) {    // ex) 2143 -> 3, 4, 1, 2 순으로 push_back
		v.push_back(N%10);
		N /= 10;      // ex) 2143 -> 214 -> 21 -> 2 -> 0
	}

	sort(v.begin(), v.end()); // 오름차순으로 v 벡터 정렬
	reverse(v.begin(), v.end()); // 내림차순으로 reverse

	for(int i=0; i<v.size(); i++){
		cout << v[i];
	}
}

