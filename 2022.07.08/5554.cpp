#include <iostream>
using namespace std;

int main(void)
{
    int a[4];
    int sum = 0;

    for(int i=0; i<4;i++){
        cin >> a[i];
        sum += a[i];
    }

    cout << (sum/60) <<'\n' <<(sum%60);

}