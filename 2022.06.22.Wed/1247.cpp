#include <iostream>
using namespace std;
//오버플로우 생각
//long long –9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
//          -  922,337,203,685,477,580 ~   922,337,203,685,477,580

int main(void) {
    int N;
    int a;
    long long S[3] = {0};

    for (int i = 0; i < 3; i++) {
        cin >> N;

        for (int z = 0; z < N; z++){
            cin >> a;
            S[i] += a;
        }
    }

    cout << endl;

    for (int i = 0; i < 3; i++){
        if(S[i]<0){
            cout << "-" << endl;
        }

        else if(S[i]>0){
            cout << "+" << endl;
        }

        else{
            cout << "0"<< endl;
        }
    }

    return 0;
}
