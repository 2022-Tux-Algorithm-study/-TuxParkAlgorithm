//콘테스트

#include <iostream>
using namespace std;

int main(void)
{
    int arr[10] = {0};
    int brr[10] = {0};

    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    for(int i=0;i<10;i++){
        cin >> brr[i];
    }

    int max,swap;
    int asum = 0, bsum=0;


    for(int i=0;i<3;i++){
        max = i;
        for(int z=(i+1);z<10;z++){
            if(arr[max] < arr[z]){
                max = z;
            }
        }
    
        if(max != i){
            swap = arr[i];
            arr[i] = arr[max];
            arr[max] = swap;
        }
    }

     for(int i=0;i<3;i++){
        max=i;
        for(int z=(i+1);z<10;z++){
            if(brr[max] < brr[z]){
                max = z;
            }
        }

        if(max != i){
            swap = brr[i];
            brr[i] = brr[max];
            brr[max] = swap;
        }
    }

    for(int i=0; i<3; i++){
        asum += arr[i];
        bsum += brr[i];
    }

    cout << asum << " " << bsum;

    return 0;
}