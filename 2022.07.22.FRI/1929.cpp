#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int M,N,z;
    cin >> M >> N;
    vector <int> v;

    for(int i=M;i<=N;i++){
        for(z=2;z<=(int)floor(sqrt(i));z++){
            if(i % z == 0){
                break;
            }
        }


        if((i != 1) && (z == ((int)floor(sqrt(i))+1))){
            v.push_back(i);
        }

    }

    for(int i=0;i<v.size();i++){
        cout << v[i] << "\n";
    }


    return 0;
}