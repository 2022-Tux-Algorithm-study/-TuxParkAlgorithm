#include <iostream>
using namespace std;

int main(void)
{
    int A,B,C;
    cin >> A >> B >> C;

    int sum = A+B+C;

    if((A == 60) && (B == 60) && (C == 60)){
        cout << "Equilateral" << "\n";
        return 0;
    }

    else if(sum == 180){
        if((A != B) && (B != C) && (C != A)){
            cout << "Scalene" << "\n";
            return 0;
        }
        else{
            cout << "Isosceles" << "\n";
            return 0;
        }
    }

    else{
        cout << "Error" << "\n";
        return 0;
    }

}