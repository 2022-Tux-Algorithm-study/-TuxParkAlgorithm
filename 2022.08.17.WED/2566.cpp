#include <iostream>
using namespace std;

int main(void)
{
    int arr[9][9] = {0};
    int i,z,max;
    int imax,zmax;

    for(i=0;i<9;i++){
        for(z=0;z<9;z++){
            cin >> arr[i][z];
        }
    }

    max = arr[0][0];
    imax = 0;
    zmax = 0;

    for(i=0;i<9;i++){
        for(z=0;z<9;z++){
            if(max < arr[i][z]){
                max = arr[i][z];
                imax = i;
                zmax = z;
            }
        }
    }

    cout << max << "\n" << imax+1 << " " << zmax+1 << "\n";

    return 0;
}