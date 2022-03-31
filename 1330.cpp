#include <iostream>
using namespace std;

// Compare AB

int main() {
	int A,B;
	cin >> A;
	cin >> B;
	if(A>B){
		cout << ">";
	}
	else if(A<B){
		cout << "<";
	}
	else if(A==B){
		cout << "==";
	}
}
