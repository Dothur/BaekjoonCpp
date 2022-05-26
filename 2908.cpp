#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// 상수 (입력한 두수를 거꾸로 읽었을때 더 큰수를 출력)
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    int aa = stoi(a);
    int bb = stoi(b);
    
    int res = max(aa, bb);
    
    cout << res;
}