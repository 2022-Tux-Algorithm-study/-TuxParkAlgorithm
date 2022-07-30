#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

    int a,b,c,d;
    int count0 = 0;
    vector <char> v;

    for(int i=0;i<3;i++){
        cin >> a;
        if(a == 0){
            count0++;
        }

        cin >> b;
        if(b == 0){
            count0++;
        }

        cin >> c;
        if(c == 0){
            count0++;
        }

        cin >> d;
        if(d == 0){
            count0++;
        }


        if(count0 == 4){
            v.push_back('D');
        }

        if(count0 == 3){
            v.push_back('C');
        }

        if(count0 == 2){
            v.push_back('B');
        }

        if(count0 == 1){
            v.push_back('A');
        }

        if(count0 == 0){
            v.push_back('E');
        }

        count0 = 0;
    }


    for(int i=0;i<3;i++){
        cout << v[i] << "\n";
    }


    return 0;
}