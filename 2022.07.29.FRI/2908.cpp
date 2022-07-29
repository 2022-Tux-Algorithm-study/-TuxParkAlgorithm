#include <iostream>
using namespace std;

int main(void)
{
    int A,B;
    cin >> A >> B;

    int i=0;
    int a[3]={0};
    int b[3]={0};

    for(i=0;i<3;i++){
        a[i] = A % 10;
        A = A / 10;

        b[i] = B % 10;
        B = B / 10;
    }

    int asum = a[0]*100 + a[1]*10 + a[2];
    int bsum = b[0]*100 + b[1]*10 + b[2];

    if(asum > bsum){
        cout << asum << "\n";
    }

    else{
        cout << bsum << "\n";
    }
}