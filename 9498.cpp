#include <iostream>
using namespace std;

// test score 시험 성적

int main()
{
    int jum;
    cin >> jum;
    
    if(jum>=90)
    {
        cout << "A";
    }
        else if(jum>=80) 
        { 
            cout << "B";
        }
        else if(jum>=70)
        {
            cout << "C";
        }
        else if(jum>=60)
        {
            cout << "D";
        }
    else
    {
        cout << "F";
    }
}
