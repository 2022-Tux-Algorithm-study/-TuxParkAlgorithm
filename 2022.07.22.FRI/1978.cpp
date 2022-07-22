#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector <int> arr(N);
    int i,z;

    for(i=0;i<N;i++){
        cin >> arr[i];
    }

    int count = 0;
    //1 3 5,2 7
    for(i=0;i<N;i++){
        for(z=2;z<=(int)floor(sqrt(arr[i]));z++){
            if(arr[i] % z == 0){
                break;
            }
        }

        if((arr[i] != 1) && (z == ((int)floor(sqrt(arr[i]))+1))){
            count ++;
        }
    }

    cout << count << "\n";



    return 0;
}