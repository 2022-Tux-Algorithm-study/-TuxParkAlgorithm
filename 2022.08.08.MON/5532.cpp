#include <iostream>
using namespace std;

int main(void)
{
    int L,A,B,C,D;
    int KD = 0,MD = 0;

    cin >> L;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    KD = A / C;
    if(A % C != 0){
        KD++;
    }

    MD = B / D;
    if(B % D != 0){
        MD++;
    }

    if(KD >= MD){
        cout << L-KD << "\n";
    }

    else{
        cout << L-MD << "\n";
    }

    return 0;
}