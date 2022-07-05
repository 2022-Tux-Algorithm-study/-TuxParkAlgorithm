//선택정렬
#include <iostream>

using namespace std;


int arr_compare(int *arr,int *brr,int A);

int main(void)
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A;
    cin >> A;

    int arr[A];
    int brr[A];
    int i,z;

    for(i=0;i<A;i++){
        cin >> arr[i];
    }

    for(i=0;i<A;i++){
        cin >> brr[i];
    }
    
    if(arr_compare(arr,brr,A) == 1){
        cout << 1;
        return 0;
    }

    int max,swap;
    
    for(i=(A-1);i>0;i--){
        max = i;

        for(z=0;z<i;z++){
            if(arr[max]<arr[z]){
                max = z;
            }
        }

        if(max != i){
            swap = arr[i];
            arr[i] = arr[max];
            arr[max] = swap;
        }

        if(arr_compare(arr,brr,A) == 1){
            cout << 1;
            return 0;
        }
    }
 
    cout << 0;
    
    return 0;
}


int arr_compare(int *arr,int *brr,int A)
{
    for(int j=0;(j<A);j++){
        if(arr[j] != brr[j]){
            return 0;
        }
    }

    return 1;

}