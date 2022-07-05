#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (void)
{
    int N,n;
    vector <int> v;
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> n;
        if(find(v.begin(),v.end(),n) == v.end()){
            v.push_back(n);
        }
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout << v[i]  << " ";
    }
    cout << '\n';
}