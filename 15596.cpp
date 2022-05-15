#include <iostream>
#include <vector>
using namespace std;
// 함수를 이용한 정수 n 개의 합
long long sum(vector<int> &a)
{
	long long res = 0;
	for(int i=0; i<a.size(); i++) {
		res += a[i];
	}
	return res;
}
