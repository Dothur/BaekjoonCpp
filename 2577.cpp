#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//숫자의 개수 A*B*C 값이 0부터 9까지 각각 숫자가 몇번 쓰였는지
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> v(10,0);   // 0으로 초기화한 0부터 9까지의 인덱스 vector 를 생성
	int a, b, c, set, mul; // vector의 인덱스를 활용해서 mul%10 값인 인덱스의 0으로 초기화되어있는
	cin >> a >> b >> c;    // 값을 ++ (1증가) 시켜줘서 나중에 vector 를 전체 출력하면
	mul = a*b*c;           // 0값이 몇개 1값이 몇개 ~ 이런식으로 구할수 있음

	while(mul > 0) {
		set =(mul % 10); // set에 mul을 10으로 나눈 나머지값(첫째 자리의 숫자부터 계산해 저장함)
		v[set]++; // mul을 10으로 나눈 나머지값의 인덱스의 값을 1증가 시킴( == 카운트)
		mul /= 10; // 첫째자리부터 한자리씩 삭제하고 다시 반복함 mul값이 0이 될때 까지
	}
	for(int i=0; i<10; i++) {
		cout << v[i] << "\n";
	}
}

