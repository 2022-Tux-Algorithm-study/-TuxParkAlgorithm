#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    vector <int> price(T,0);

    int s,n,q,p;

    for(int i=0; i<T; i++){
        cin >> s;
        price[i] = s;
        cin >> n;
        for(int z=0;z<n;z++){
            cin >> q >> p;
            price[i] += (q*p);
        }
    }

    for(int i=0; i<T; i++){
        cout << price[i] << "\n";
    }
    

    return 0;
}