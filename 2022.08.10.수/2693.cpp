#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int T;
    cin >> T;
    vector <int> v1(10);
    vector <int> v2(T);

    for(int i=0;i<T;i++){
        for(int z=0;z<10;z++){
            cin >> v1[z];
        }
        sort(v1.begin(),v1.end());
        v2[i] = v1[7];
    }

    for(int i=0;i<T;i++){
        cout << v2[i] << "\n";
    }

    return 0;
}