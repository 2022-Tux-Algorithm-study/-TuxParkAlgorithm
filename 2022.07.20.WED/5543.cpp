#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<int>h(3);
    vector<int>d(2);

    for(int i=0;i<3;i++){
        cin>>h[i];
    }

    for(int i=0;i<2;i++){
        cin>>d[i];
    }

    sort(h.begin(),h.end());
    sort(d.begin(),d.end());

    cout << ((h[0]+d[0])-50) << "\n";

    return 0;
}