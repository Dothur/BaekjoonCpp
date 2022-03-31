#include <iostream>
using namespace std;

// leap year 윤년

int main()
{
    int y;
    cin >> y;
    
    if(y%4==0)   // 4의 배수일때
    {
        if(y%100!=0 || y%400==0)  // 100의 배수가 아닐때 or 400의 배수일때
        {
            cout << 1;
        }
        else cout << 0;
    }
    else cout << 0;
}
