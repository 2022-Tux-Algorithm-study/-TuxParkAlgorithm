#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector <int> sub1(4);
    vector <int> sub2(2);

    for(int i=0;i<4;i++){
        cin >> sub1[i];
    }

    sort(sub1.begin(),sub1.end());

    for(int i=0;i<2;i++){
        cin >> sub2[i];
    }

    sort(sub2.begin(),sub2.end());    

    cout << sub1[1]+sub1[2]+sub1[3]+sub2[1] << "\n";

    return 0;
}