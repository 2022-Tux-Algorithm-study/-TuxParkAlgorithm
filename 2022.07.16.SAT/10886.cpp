#include <iostream>
using namespace std;

int main(void)
{
    int N,A;
    int y=0,n=0;

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> A;
        if(A==0){
            n++;
        }
        else{
            y++;
        }
    }

    if(n>y){
        cout << "Junhee is not cute!" << "\n";
    }
    else{
        cout << "Junhee is cute!" << "\n";
    }
}