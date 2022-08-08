#include  <iostream>

using namespace std;



int main(void)
{
    int S,K,H;
    cin >> S >> K >> H;

    int sum = S+K+H;



    if(sum>=100){

        cout << "OK" << "\n";
        return 0;
    }
    
    else{
        int min;
        min = (S<=K)? S:K;
        min = (min<=H)? min:H;

    if(min==S){
        cout << "Soongsil" << "\n"; 
        return 0;
    }

    else if(min==K){
        cout << "Korea" << "\n";
        return 0;
    }

    else{
        cout << "Hanyang" << "\n";
        return 0;
    }

    }

}