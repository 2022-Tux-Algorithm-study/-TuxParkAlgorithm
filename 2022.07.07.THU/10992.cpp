#include <iostream>
using namespace std;

int main(void)
{
    int M,D;

    cin >> M;
    cin >> D;

    if(M<2){
        cout << "Before";
    }

    else if(M == 2){
        if(D == 18){
            cout << "Special";
        }
        else if(D < 18){
            cout << "Before";
        }
        else{
            cout << "After";
        }
    }

    else{
        cout << "After";
    }

    return 0;
}