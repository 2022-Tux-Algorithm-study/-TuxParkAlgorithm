#include <iostream>
using namespace std;

int main(void)
{
    int T = 1;
    int C;
    cin >> C;

    int A,B;
    int sum[C];

    for(int i=0;i<C;i++){
        cin >> A >> B;
        sum[i] = A + B;
    }

    for(int i=0;i<C;i++){
        cout << "Case " << T <<": " << sum[i] << "\n";
        T++;
    }
    

    return 0;
}