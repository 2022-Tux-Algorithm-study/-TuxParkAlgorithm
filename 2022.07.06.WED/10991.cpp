#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        for(int z=(N-i-1);z>0;z--){
            cout << ' ';
        }

        cout << '*';

        for(int j=0; j<i; j++){
            cout << " *";
        }

        cout << '\n';
    }



}