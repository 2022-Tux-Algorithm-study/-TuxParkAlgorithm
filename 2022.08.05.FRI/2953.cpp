#include <iostream>
using namespace std;

int main(void)
{
    int sum[5] = {0};
    int a;

    for(int i=0;i<5;i++){
        for(int z=0;z<4;z++){
            cin >> a;
            sum[i] += a;
        }
    }

    int max_index = 0;

    for(int i=1;i<5;i++){
        if(sum[max_index] < sum[i]){
            max_index = i;
        }
    }

    cout << max_index+1 << " " << sum[max_index] << "\n";

    return 0;
}