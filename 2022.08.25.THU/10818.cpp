#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    vector <int> num(T);

    for(int i=0;i<T;i++){
        cin >> num[i];
    }

    sort(num.begin(),num.end());

    cout << num[0] << " " << num[T-1] << "\n";

    return 0;
}