#include <iostream>
using namespace std;

// N 횟수만큼 줄넘김하며 N, N-1, N-2 ~ 

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	if(N <= 100000 && N >0){
		for(int i=N; i>=1; i--) {
			cout << i << '\n';
		}
	}
}

