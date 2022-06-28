//선택 정렬

#include <iostream>
using namespace std;

int main(void)
{
    int A,K;
    cin >> A >> K;

    int Arr[A];
    int Brr[A];

    int Amax_index;
    int Bmin_index;
    int swap;
    int acount = 0; 
    int bcount = 0;

    for(int i=0; i<A; i++){
        cin >> Arr[i];
        Brr[i] = Arr[i];
    }


    for(int i=0;i<(A-1);i++){
        Bmin_index = i;

        for(int z=i+1; z<A; z++){
            if(Brr[Bmin_index]>Brr[z]){
                Bmin_index = z;
            }
        }

        if(i != Bmin_index){
            swap = Brr[i];
            Brr[i]= Brr[Bmin_index];
            Brr[Bmin_index] = swap;

            bcount ++;
        }
    }

    if(bcount < K){
        cout << -1 << endl;
        return 0;
    }

    for(int i = (A-1); i>0; i--){
        Amax_index = i;

        for(int z = 0; z<i; z++){
            if(Arr[Amax_index]<Arr[z]){
                Amax_index = z;
            }
        }

        if(i != Amax_index){
            swap = Arr[i];
            Arr[i] = Arr[Amax_index];
            Arr[Amax_index] = swap;

            acount ++;
        }
       
        if(acount == K){
            for(int i=0; i<A; i++){
                cout << Arr[i] << " ";
            }
            return 0;
        }
    }

}