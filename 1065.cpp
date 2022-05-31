#include <iostream>
using namespace std;
// 한수 (등차수열)
bool han(int a){
    if(a < 100) { // 1부터 99까지의 수는 전부 한수이므로 true -> cnt++
        return true;
    }
    int a3,a2,a1; // a3= 백의 자리 / a2= 십의 자리 / a1= 일의 자리
    a3 = a / 100;         // ex) 342 => 3
    a2 = (a % 100) / 10;  // ex) 342 => 42 / 10 = 4
    a1 = a % 10;          // ex) 342 => 2
    if(a3-a2 == a2-a1) {  // a3-a2 값과 a2-a1 값이 같다면 등차수열에 해당
        return true;
    }
    else return false;
}
int main(){
    int n, cnt=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(han(i)) cnt++;
    }
    cout << cnt;
}
