#include <iostream>
using namespace std;

// N 횟수만큼 줄넘김하며 1, 2, 3 ~ 출력 

int main() {
	int N;
	cin >> N;
	if(N <= 100000 && N >0){
		for(int i=1; i<=N; i++) {
			cout << i << '\n';
		}
	}
}

