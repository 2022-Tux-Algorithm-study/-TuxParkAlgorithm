#include <iostream>
using namespace std;


int main(void)
{
    int n;
    cin >> n;

    int N[n];
    N[0] = 0;
    N[1] = 1;
    int sum = 0;

    for(int i=2;i <=n;i++){
        N[i] = N[i-2] + N[i-1];
    }

    cout << N[n] << "\n";

    return 0;
}