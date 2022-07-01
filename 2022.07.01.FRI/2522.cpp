#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for(int i=0;i<N;i++){

        for(int z=0;z<(N-i-1);z++){
            cout << ' ';
        }

        for(int j=0;j<=i;j++){
            cout << '*';
        }

        cout << endl;
    }

    for(int i=0;i<(N-1);i++){
        for(int j=0;j<=i;j++){
            cout << " ";
        }

        for(int z=(N-1);z>i;z--){
            cout << '*';
        }
        cout << endl;
    }

    return 0;

}