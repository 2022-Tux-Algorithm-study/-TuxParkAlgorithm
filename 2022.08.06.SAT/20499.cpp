#include <iostream>
using namespace std;

int main(void)
{
    int K,D,A;
    char slash[2];

    cin >> K >> slash[0] >> D >> slash[1] >> A ;

    if(((K+A) < D) || (D == 0)){
        cout << "hasu" << "\n";
   
    }

    else{
        cout << "gosu" << "\n";
    }

    return 0;
}