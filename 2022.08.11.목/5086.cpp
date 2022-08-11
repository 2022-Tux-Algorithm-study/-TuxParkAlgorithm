#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    int A,B;
    cin >> A >> B;

    vector <string> v;

    while((A != 0) && (B != 0)){
        if(B % A == 0){
            v.push_back("factor");
            cin >> A >> B;
            continue;
        }
        else if(A % B == 0){
            v.push_back("multiple");
            cin >> A >> B;
            continue;
        }
        else{
            v.push_back("neither");
            cin >> A >> B;
            continue;
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }

    return 0;
}