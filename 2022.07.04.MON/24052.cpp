#include <iostream>
using namespace std;

int main(void)
{
    int A,K;
    cin >> A >> K;

    int arr[A];
    int brr[A];
    int i,z;
    for(i=0;i<A;i++){
        cin >> arr[i];
        brr[i] = arr[i];
    }

    int acount=0, bcount=0;
    int key;

    for(i=1;i<A;i++){
        key = brr[i];
        for(z=(i-1);((z>=0) && (brr[z]>key)); z--){
            brr[z+1] = brr[z];
            bcount ++;
        }

        if(brr[z+1] != key){
            brr[z+1] = key;
            bcount ++;
        }
    }

    if(bcount < K){
        cout << -1 << endl;
        return 0;
    }

    for(i=1;i<A;i++){
        key = arr[i];
        for(z=(i-1);((z>=0)&&(arr[z]>key));z--){
            arr[z+1] = arr[z];
            acount ++;

            if(acount == K){
                for(int j=0;j<A;j++){
                    cout << arr[j] << " ";
                }
                cout << endl;
                return 0;
            }
        }

        if(arr[z+1] != key){
          arr[z+1] = key;
          acount ++;

            if(acount == K){
                for(int j=0;j<A;j++){
                    cout << arr[j] << " ";
                }
                cout << endl;
                return 0;
            }
        }
    }
}