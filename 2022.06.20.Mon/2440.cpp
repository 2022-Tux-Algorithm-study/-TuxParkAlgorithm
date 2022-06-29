//2440번: 별찍기3
#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for(int z=0;z<N;z++){

        for(int i=(N-z);i>0;i--){
            cout << '*';
        }

    cout << '\n';

    }

    return 0;
}
