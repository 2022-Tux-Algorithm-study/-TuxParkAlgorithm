//2441번: 별찍기4
#include <iostream>
using namespace std;


int main(void)
{
    int N;

    cin >> N;

    for(int i=0; i<N; i++){

        for(int s=0; s<i; s++){
            cout <<" ";
        }

        for(int z=(N-i); z>0; z--){
            cout << '*';
        }

            cout << "\n";
    }

    return 0;
}
