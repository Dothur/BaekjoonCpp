#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 알파벳 찾기
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string s;
    cin >> s;
    int cnt[26];
    
    for(int i='a'; i<='z'; i++){
        for(int j=0; j<s.size(); j++){
            if(s[j] == i) {
                cnt[i] = j;
                break;
            }
            else cnt[i] = -1;
        }
        cout << cnt[i] << " ";
    }
}