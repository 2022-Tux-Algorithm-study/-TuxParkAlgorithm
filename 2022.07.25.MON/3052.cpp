#include <iostream>
using namespace std;

int main(void)
{
    int A,arr[10] = {0};
    int count = 0;
    int z;
    for(int i=0;i<10;i++){
        cin >> A;
        arr[i] = A % 42 ;

        for(z=(i-1); z >= 0; z--){
            if(arr[i] == arr[z]){
                break;
            }
        }

        if(z == (-1)){
            count ++;
        }
    }

    cout << count << "\n";


    return 0;
}