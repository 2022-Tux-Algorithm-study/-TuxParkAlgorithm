#include <iostream>
#include <cmath>
using namespace std;



int main(void)
{   
    int A,B,N;
    int quotient,remainder;

    cin >> A >> B >> N;

    remainder = (A % B)*10;


    for(int i=0;i<N;i++){

        if(i==(N-1)){
            quotient = remainder / B;
            break;
        }

        remainder = (remainder % B) * 10;
    }

    cout << quotient << "\n";

    return 0;
}