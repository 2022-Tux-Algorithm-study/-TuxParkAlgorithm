#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int arr[7] = {0};

    int sum = 0;
    vector <int> v;

    for(int i=0;i<7;i++){
        cin >> arr[i];
    }

    for(int i=0;i<7;i++){
        if(arr[i]%2 == 1){
            sum += arr[i];
            v.push_back(arr[i]);
        }
    }

    sort(v.begin(),v.end());

    if(v.size() == 0){
        cout << -1 << "\n";
        return 0;
    }

    cout << sum << "\n" << v[0] << "\n";


    return 0;
}