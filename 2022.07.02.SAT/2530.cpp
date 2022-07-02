#include <iostream>
using namespace std;

int main(void){
    int A,B,C,D;
    int H,M,S;

    cin >> A >> B >> C;
    cin >> D;

    H = D/3600; 
    M = (D%3600)/60;  
    S = (D%3600)%60; 

    if((C+S)==60){
        S = 0;
        M++;
    }

    else if((C+S)>60){
        S = (C+S)%60;
        M++;
    }

    else{
        S+=C;
    }

    if((B+M)==60){
        M = 0;
        H++;
    }

    else if((B+M)>60){
        M = (B+M)%60;
        H++;
    }

    else{
        M += B;
    }

    if((A+H)==24){
        H=0;
    }

    else if((A+H)>24){
        H = (A+H)%24;
    }

    else{
        H += A;
    }



    
    cout << H << ' ' << M << ' ' << S << endl;
}