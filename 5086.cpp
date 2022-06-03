#include <iostream>
using namespace std;
// 배수와 약수 
int main() {
	while(1){
		int a,b;
		cin >> a >> b;
		if(a==0 && b==0) break;
		else if(b%a == 0) cout << "factor" << '\n';
		else if(a%b == 0) cout << "multiple" << '\n';
		else cout << "neither" << '\n';
	}
}

