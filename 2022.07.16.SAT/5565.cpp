#include <iostream>
using namespace std;

int main(void)
{
    int P,p;
    cin >> P;

    for(int i=0;i<9;i++){
        cin >> p;
        P -= p;
    }

    cout << P;

    return 0;
}