#include <iostream>
using namespace std;

int main(void)
{
    int  N;
    cin >> N;

    long long arr[3] = {0,1};
    long long swap0,swap1;

    for(int i=1; i<N; i++){
        swap0 = arr[1];
        swap1 = arr[0] + arr[1];
        arr[0] = swap0;
        arr[1] = swap1;
    }

    cout << arr[1] << "\n";

    return 0;
}