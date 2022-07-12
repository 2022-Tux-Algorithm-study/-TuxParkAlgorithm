#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int C;
    cin >> C;
    float brr[C];

    int N;
    float B;
    int sum = 0;
    int count = 0;
    float average;

    for(int i=0;i<C;i++){
        cin >> N;
        int arr[N];

        for(int z=0;z<N;z++){
            cin >> arr[z];
            sum += arr[z];
        }
        
        average = (((float)sum)/((float)N));

        for(int j=0;j<N;j++){
            if(average < arr[j]){
                count ++;
            }
        }

        B = (((float)count)/((float)N))*100;
        brr[i] = B;

        sum = 0;
        count = 0;
    }

    for(int i=0;i<C;i++){
        cout << fixed;
        cout.precision(3);
        cout << brr[i] <<"% \n";
    }


}