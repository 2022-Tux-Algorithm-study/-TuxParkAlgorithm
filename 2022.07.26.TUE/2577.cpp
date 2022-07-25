#include <iostream>
using namespace std;

int main(void)
{
    int A,B,C;
    cin >> A;
    cin >> B;
    cin >> C;

    int mul = A*B*C;

    int arr[10] = {0};

    while(mul/10 !=0){

        for(int i=0;i<10;i++){
            if(mul%10 == i){
                arr[i]++;
                break;
            }
        }
        mul = mul/10;
    }

    for(int i=0;i<10;i++){
        if(mul%10 == i){
            arr[i]++;
            break;
        }
    }

    for(int i=0;i<10;i++){
        cout << arr[i] << "\n";
    }

    return 0;
}