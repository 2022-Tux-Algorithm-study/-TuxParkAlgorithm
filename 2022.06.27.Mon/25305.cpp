#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N,k,x;
    vector <int> v;
    cin >> N >> k;

    for(int i=0;i<N;i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    cout << v[(N-k)];

    return 0;
}
