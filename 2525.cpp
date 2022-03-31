#include <iostream>
using namespace std;

// oven clock 오븐 시계 

int main() {
	int hour, m, min, time;
	cin >> hour >> m; // 시, 분
	cin >> min;       // 걸리는 시간(분)

	m = m+min;
	if(m >= 60) 
	{
		time= m/60;   // 몫을 time에 저장
		m= m%60;      // 11행의 m을 60나눈 나머지를 m에 저장
		hour= hour+time; // hour에 더해줌
		if(hour>=24)  // 24시 이상이 될때
		{
			hour = hour%24;  // 24로 나눈 나머지를 hour에 저장
		}
	}
	cout << hour << " " << m;
}
