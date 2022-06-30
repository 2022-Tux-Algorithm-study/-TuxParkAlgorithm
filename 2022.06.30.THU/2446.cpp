//2446번: 별찍기9
#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for(int i=1;i<=N; i++){
        for(int z=0;z<(i-1);z++){
            cout << ' ';
        }
        for(int j=0;j<((2*(N-i))+1);j++){
            cout << '*';
        }
        cout << endl;
    }

    for(int i=1;i<N; i++){
        for(int z=0;z<(N-i-1);z++){
            cout << ' ';
        }
        for(int j=0;j<((2*i)+1);j++){
            cout << '*';
        }
        cout << endl;
    }
}