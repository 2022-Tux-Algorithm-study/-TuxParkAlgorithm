//버블정렬
#include <iostream>
using namespace std;

int main(void)
{

    int A,K;
    cin >> A >> K;

    int Arr[A];
    int Brr[A];
    int i,z,swap;

    for(i=0;i<A;i++){
        cin >> Arr[i];
        Brr[i] = Arr[i];
    }

    int b_count = 0;
    int b_min_index;

    for(i=0;i<(A-1);i++){
        for(z=0; z<(A-i-1); z++){
            if(Brr[z]>Brr[z+1]){
                swap = Brr[z];
                Brr[z] = Brr[z+1];
                Brr[z+1] = swap;

                b_count ++;
            }
        }   
    }

    if(b_count < K){
        cout << -1 << endl;
        return 0;
    }

    int a_count = 0;
    int a;

    for(i=0; i<(A-1); i++){
        for(z=0; z<(A-i-1); z++){
            if(Arr[z]>Arr[z+1]){
                a = z;
                swap = Arr[z];
                Arr[z] = Arr[z+1];
                Arr[z+1] = swap;
                
                a_count ++;
            }

            if(a_count == K){
                cout << Arr[a]  << " " << Arr[a+1] << endl;
            
                return 0;
            }
        }
    }
}