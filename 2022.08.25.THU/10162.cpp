#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    int A,B,C;

    if(T >= 300){
        A = T/300;
        T = T % 300;

        B = T / 60;
        T = T % 60;

        C = T / 10;

        if(T % 10 != 0){
            cout << -1 << "\n";
            return 0;
        }
        
        else{
            cout << A << " " << B << " " << C << "\n";
            return 0;
        }
        
    }

    else if(T >= 60){
        A = 0;

        B = T / 60;
        T = T % 60;

        C = T / 10;

        if(T % 10 != 0){
            cout << -1 << "\n";
            return 0;
        }
        
        else{
            cout << A << " " << B << " " << C << "\n";
            return 0;
        }
        
    }

    else{
        A = 0;
        B = 0;
        C = T / 10;

        if(T % 10 != 0){
            cout << -1 << "\n";
            return 0;
        }
        
        else{
            cout << A << " " << B << " " << C << "\n";
            return 0;
        }
    }
}