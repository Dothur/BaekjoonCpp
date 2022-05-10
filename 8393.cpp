#include <iostream>
using namespace std;
// 1 부터 n 까지의 합을 출력
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
	cout << sum;
}
