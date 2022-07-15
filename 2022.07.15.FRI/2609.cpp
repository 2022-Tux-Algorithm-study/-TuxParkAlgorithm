#include <iostream>
using namespace std;

int main(void)
{
    int A,B;
    int r;

    cin >> A >> B;
    int mul = A*B;

    while(A%B !=0){
        r = A % B;
        A = B;
        B = r;
    }

    cout << B << "\n";
    cout << (mul/B) << "\n";

    return 0;
}