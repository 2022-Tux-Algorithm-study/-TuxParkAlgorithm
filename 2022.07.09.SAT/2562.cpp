#include <iostream>
using namespace std;

int main(void)
{
    int arr[9];
    int max;
    int i,z;
    
    for(i=0;i<9;i++){
        cin >> arr[i];
    }

    max = 0;
    for(z=1;z<9;z++){
        if(arr[max]<arr[z]){
            max = z;
        }
    }

    cout << arr[max] << "\n" << max+1 << "\n";

    

    return 0;
}