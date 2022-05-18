#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 문자열 반복
int main()
{
    int T, R;
    string str;
    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> R >> str;
        for(int j=0; j< str.size(); j++){
            for(int k=0; k<R; k++){
                cout<< str[j];
            }
        }
        cout << "\n";
    }
}
