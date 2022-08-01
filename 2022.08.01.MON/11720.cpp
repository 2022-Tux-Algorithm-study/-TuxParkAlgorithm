#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    char num_arr[N];

    int sum = 0;
    int num;

    cin >> num_arr;

    for(int i=0;i<N;i++){
       sum += (num_arr[i] - 48);
    }

    cout << sum << "\n";


    return 0;
}