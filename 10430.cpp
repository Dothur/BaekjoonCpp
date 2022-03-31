#include <iostream>
using namespace std;

// remain  나머지

int main() {
	int A,B,C;
	cin >> A >> B >> C;

	cout << (A+B)%C << endl;
	cout << ((A%C)+(B%C))%C << endl;
	cout << (A*B)%C << endl;
	cout << ((A%C)*(B%C))%C << endl;

}


