#include <iostream>
using namespace std;
// 팩토리얼 재귀함수

int fac(int n){
    if(n <= 1) return 1;
    return n * fac(n-1);
}

int main(){
    int n;
    cin >> n;
    
    cout << fac(n);
}
