#include <iostream>
using namespace std;

// 구구단 입력한 숫자의 단을 1~9 단 출력함.

int main()
{
    int N;
    cin >> N;
    
    for(int i=1 ; i<=9; i++){
        int m = N*i;
        cout << N << " * " << i << " = "<< m << endl;
    }
}
