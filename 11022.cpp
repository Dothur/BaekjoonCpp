#include <iostream>
using namespace std;
// "Case #x: A+B = C
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t, a, b;
	cin >> t;
	for(int i=1; i<=t; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": "<< a << " + " << b << " = " << a+b << "\n";
	}
}

