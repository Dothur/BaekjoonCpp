#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 주사위 문제..!

int main()
{
    // * test
    // * c++ 입출력 속도를 가속 시키기 위한 코드
	ios::sync_with_stdio(0);
    // 1. C 표준 stream과 C++ 표준 stream의 동기화를 끊는다.
    cin.tie(0); cout.tie(0);
    // 2. cin을 cout으로부터 untie 
    //    stream을 tie하면 다른 stream에서 
    //    입출력요청이 오기전에 stream을 flush시킴
    
    vector<int>v(3); // 3크기의 벡터 생성
    cin >> v[0] >> v[1] >> v[2];
    
    sort(v.begin(),v.end()); // 벡터를 오름차순으로 정렬
    if(v[0]==v[1] && v[1]==v[2]) cout << 10000+(v[0]*1000);
    else if(v[0]==v[1]) cout << 1000+(v[0]*100);
    else if(v[0]==v[2]) cout << 1000+(v[0]*100);
    else if(v[1]==v[2]) cout << 1000+(v[1]*100);
    else cout << v[2]*100;
}
