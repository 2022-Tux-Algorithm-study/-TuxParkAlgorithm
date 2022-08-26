#include <iostream>
using namespace std;

int main(void)
{
    int sum = 0;
    int n;
    cin >> n;

    while(n != -1){
        sum += n;
        cin >> n;
    }

    cout << sum <<"\n";

    return 0;
}