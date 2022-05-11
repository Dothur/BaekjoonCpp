#include <iostream>
#include <vector>
using namespace std;
// N개의 수열 생성, X보다 작은수를 출력
int main() {
	int N, X;
	cin >> N >> X;
	
	vector<int>v(N);
	int i=0;
	while(i<N) {
		cin >> v[i];
		i++;
	}
	for(int j=0; j<N; j++){
	   if(v[j] < X) cout << v[j] << " ";
	}	   
}

