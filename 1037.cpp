#include <iostream>
#include <algorithm>
using namespace std;
// 약수
int main(){
	int total; // 약수 총개수

	cin >> total;
	int* arr = new int[total]; // 모든 약수
	
	for (int i = 0; i < total; i++){
		cin >> arr[i];
	}
	sort(arr, arr+total);

	cout << arr[0] * arr[total - 1];
}
