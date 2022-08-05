#include <iostream>
using namespace std;

int main(void)
{   
    int H[3];
    int M[3];
    int S[3];

    int gh,gm,gs,oh,om,os;

    for(int i=0;i<3;i++){
        cin >> gh >> gm >> gs >> oh >> om >> os;

        if(os >= gs){
            S[i] = os - gs;

            if(om >= gm){
                M[i] = om - gm;
            }

            else{
                oh --;
                om += 60;
                M[i] = om - gm;
            }

            H[i] = oh - gh;
        }

        else{
            om --;
            os += 60;
            S[i] = os - gs;

            if(om >= gm){
                M[i] = om - gm;
            }

            else{
                oh --;
                om += 60;
                M[i] = om - gm;
            }

            H[i] = oh - gh;
        }
    }

    for(int i=0;i<3;i++){
        cout << H[i] << " " << M[i] << " " << S[i] << "\n";
    }



    return 0;
}