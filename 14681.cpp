#include <iostream>
using namespace std;
// x,y 좌표 사분면

int main() {
	int x,y;
	cin >> x;
	cin >> y;

	if(x>0 && y>0) cout << "1";
	else if(x<0 && y>0) cout << "2";
	else if(x<0 && y<0) cout << "3";
	else if(x>0 && y<0) cout << "4";
}

