#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    int GCD[T];
    int LCM[T];
    int A,B,mul,r;

    for(int i=0;i<T;i++){
        cin >> A >> B;
        mul = A * B;

        while(A % B != 0){
            r = A % B;
            A = B;
            B = r;
        }

        GCD[i] = B;
        LCM[i] = mul / B;
    }

    for(int i=0;i<T;i++){
        cout << LCM[i] << " " << GCD[i] << "\n";
    }

    return 0;
}