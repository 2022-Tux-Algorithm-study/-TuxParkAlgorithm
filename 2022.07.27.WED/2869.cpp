//5 2 9
//A-d=2
//d=3
// 5-3
// 8-6
// 11-9
// n1=

#include <iostream>
using namespace std;

int main(void)
{
    int A,B,V;
    cin >> A >> B >> V;

    int d;
    d = A-B;

    int day;
    day = ((V-(A-d))/d);
    int remainder;
    remainder = ((V-(A-d))%d);

    if(remainder != 0){
        day++;
    }
    

    cout << day << "\n";

    return 0;
}