#include <iostream>
using namespace std;

// alarm clock
// 45분 앞선 시간을 출력

int main() {
	int h=0, m=0, time;
	cin >> h >> m;

	if(m < 45)
	{
		int n = m+60;
		m = n-45;
		if(h==0) 
		{
			h = 23;
		}
		else
			h = h-1;
	}
	else if(m >= 45)
	{
		m = m-45;
	}
	cout << h << " " << m;
}
