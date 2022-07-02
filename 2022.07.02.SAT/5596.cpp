#include <iostream>
using namespace std;

int main(void)
{   
    int M[4]={0};
    int S[4]={0};
    int sm=0,ss=0;

    for(int i=0;i<4;i++){
        cin >> M[i];
    }

    for(int i=0;i<4;i++){
        cin >> S[i];
    }

    for(int i=0;i<4;i++){
        sm+= M[i];
        ss+= S[i];
    }

    if(sm>=ss){
        cout << sm;
    }
    else{
        cout <<ss;
    }

    return 0;
}