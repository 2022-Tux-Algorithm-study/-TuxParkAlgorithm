#include <iostream>
using namespace std;

int main(void)
{   
    int A,B;
    int AB;
    cin >> AB;

    if(AB == 1010){
        cout << 20 << "\n";
    }

    else if(AB/100 != 0){
        if(AB%100 == 10){
            A = AB/100;
            B = 10;
            cout << A+B << "\n";
        }
        else{
            A = 10;
            B = AB % 100;
            cout << A+B << "\n";
        }
    }

    else{
        A = AB/10;
        B = AB % 10;
        cout << A+B << "\n";

    }


    return 0;
}