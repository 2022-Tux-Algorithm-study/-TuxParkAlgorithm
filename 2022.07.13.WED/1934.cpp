#include <iostream>
#include <vector>
using namespace std;

int gcd(int a,int b);

int main(void)
{   
    int T;
    cin >> T;

    vector <int> v;
    int a,b;

    for(int i=0;i<T;i++){
        cin >> a >> b;
        v.push_back((a*b)/gcd(a,b));
    } 


    for(int i=0;i<T;i++){
        cout << v[i] << "\n";
    }

    return 0;
}

int gcd(int a,int b)
{   
    int r;

    while((a % b) != 0){
        r = a % b;
        a = b;
        b = r;
    }

    return b;
}