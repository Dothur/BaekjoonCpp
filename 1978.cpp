#include <iostream>
using namespace std;
// 소수찾기 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, pr_num; //입력할 소수의 개수 N , 소수pr_num
	int res = 0;
	int cnt = 0;
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> pr_num;
		for(int j=1; j<=pr_num; j++){  //j는 1부터 시작 pr_num 까지 증가시키면서
			if(pr_num % j == 0) cnt++; //pr_num 입력한 소수를 j로 나눴을때 0이 되면
		}							   // cnt를 1씩 증가시킴
		if(cnt == 2) res++;			   // for문 안의 for문이 끝나고서 cnt값이 2와 같다면
		cnt = 0;					   // res에 1씩 증가시킴(= 소수의 개수)
	}			                       // cnt 는 17행의 if문이 끝나고서 바로
	cout << res << "\n";			   // 0으로 초기화 시켜서 i for문을 다시 실행함
}

