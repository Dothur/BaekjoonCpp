#include <iostream>
#include <vector>
using namespace std;
// 평균 테스트 케이스, 학생마다 과목수에따른 점수 입력
// N 명의 학생의 각각 점수의 평균값을 구한후
// 학생중에 평균값 보다 높은 점수인 학생의 비율을
// 소수점 셋째 자리까지 출력함
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int c, N;               // c = testcase , N = student
	double avg, cnt, jumsu; // avg = 평균, cnt = 평균을 넘는 학생 수
							// jumsu = 평균넘는 학생수 / 총 학생 수
	vector<double> res;     // 마지막에 jumsu 값을 벡터에 저장함
	cin >> c;
	
	for(int i=0; i<c; i++) {
		cin >> N;

		vector<int> s;      // 점수를 입력받아 벡터에 저장함
		avg = 0;
		for(int i=0; i<N; i++) {
			int score;
			cin >> score;

			s.push_back(score);
			avg += score;   // 입력받은 점수를 하나씩 avg에 더하여 저장
		}
		avg /= N;           // 위에서 다 합해진 총 점수값을 학생수로 나눔
		cnt = 0;

		for(int i=0; i<N; i++) { // 저장된 score 값이 위에서 구했던
			if(s[i] > avg) {     // avg 값보다 크다면
				cnt++;           // 평균을 넘는 학생수 cnt를 하나씩 증가
			}
		}
		jumsu = cnt / N;        
		jumsu *= 100;
		res.push_back(jumsu);
	}
	for(int i=0; i<c; i++) {
		cout << fixed;
		cout.precision(3);       // 소수점 셋째 자리까지 출력!
		cout << res[i] << "%\n";
	}
}
