//10989번: 별찍기8
#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for(int i =1; i<=N; i++){
        for(int z=0; z<i; z++){
            cout << '*';
        }
        for(int j=0; j<(2*(N-i)); j++){
            cout << ' ';
        }
        for(int z=0; z<i; z++){
            cout << '*';
        }

        cout << endl;
    }

    for(int i =1; i<N; i++){
        for(int z=0; z<(N-i); z++){
            cout << '*';
        }
        for(int j=0; j<(2*i); j++){
            cout << ' ';
        }
       for(int z=0; z<(N-i); z++){
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}