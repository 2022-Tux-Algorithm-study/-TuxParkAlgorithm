#include <iostream>
using namespace std;

int main(void)
{
    int K,N,M;

    cin >> K >> N >> M;

    int price = K * N;

    if(price>M){
        cout << price - M << "\n";
    }

    else{
        cout << 0 << "\n";
    }

}