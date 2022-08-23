#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    if(N == 1){
        cout << "*\n";
        return 0;
    }

    int a,b,c,d;

    for(a=0;a<(N-1);a++){

        for(b=a;b<(N-1);b++){
            cout << " ";
        }

        cout << "*";

        for(c=0;c<((a*2)-1);c++){
            cout << " ";
        }

        if(c != 0){
            cout << "*";
        }

        cout << "\n";
    }

    for(d=0;d<(N*2-1);d++){
        cout << "*";
    }

    cout << "\n";

    return 0;
}