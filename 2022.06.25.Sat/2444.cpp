#include <iostream>
using namespace std;


int main(void)
{
    int N;

    cin >> N;

    for(int i=1; i<=N; i++){

        for(int s=0; s<(N-i); s++){
            cout <<" ";
        }

        for(int z=0; z<((2*i)-1);z++){
            cout << '*';
        }

            cout << "\n";
    }

    --N;

    for(int i=N; i>0; i--){

        for(int s=N; s>=i; s--){
            cout <<" ";
        }

        for(int z=((2*i)-1); z>0; z--){
            cout << '*';
        }

            cout << "\n";
    }


    return 0;
}