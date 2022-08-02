#include <iostream>
using namespace std;

int main(void)
{
    int T,N;
    cin >> T;

    int SUB[T];
    int sub = 0;

    int a;

    for(int i=0;i<T;i++){
        cin >> N;
        for(int z=0;z<N;z++){
            cin >> a;
            sub += a;
        }
        SUB[i] = sub;
        sub = 0;
    }

    for(int i=0;i<T;i++){
        cout << SUB[i] << "\n";
    }

    return 0;
}