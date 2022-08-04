#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int t,a,sum = 0;
    cin >> t;
    int arr[t];
    int M[t];
    int N[t];
    int count = 0;

    for(int i=0;i<t;i++){
        for(int z=0;z<7;z++){
            cin >> a;

            if(a % 2 == 0){
                sum += a;
                N[count] = a;
                count ++;
            }
        }

        arr[i] = sum;
        sum = 0;

        int min = 0;

        for(int p=1;p<count;p++){
            if(N[p]<N[min]){
                min = p;
            }
        }
        
        M[i] = N[min];
        count = 0;
    }

    
    for(int i=0;i<t;i++){
        cout << arr[i] << " " << M[i] << "\n";
    }


    return 0;
}