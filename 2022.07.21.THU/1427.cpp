#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N,n;
    cin >> N;
    vector <int> v;

    if((N/10)==0){
        cout << N << "\n";
        return 0;
    }
    
    while ((N/10) != 0)
    {
        n = N%10;
        v.push_back(n);

        N = N/10;
    }

    v.push_back(N);

    sort(v.begin(),v.end());

    for(int i=(v.size()-1);i>=0;i--){
        cout << v[i];
    }

    cout << "\n";
    return 0;
    
}