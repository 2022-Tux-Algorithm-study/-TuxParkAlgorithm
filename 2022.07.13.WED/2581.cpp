#include <iostream>
using namespace std;

int main(void)
{
    long A,B;
    cin >> A >> B;
    long sum;


    //A,B 모두 양수인경우
    if((A>=0)&&(B>=0)){
       if(A>B){
        sum = (((A+B)*(A-B+1))/2);
        cout << sum << "\n";
        return 0;
       }
       else{
        sum = (((A+B)*(B-A+1))/2);
        cout << sum << "\n";
        return 0;
       }
    }

    //A,B 둘 다 음수인경우
    else if((A<0)&&(B<0)){
        A = (-1) * A;
        B = (-1) * B;

       if(A>B){
            sum = ((A+B)*(A-B+1)) / 2;
            cout << ((-1) * sum) << "\n";
            return 0;
       }

       else{
            sum = ((A+B)*(B-A+1)) / 2;
            cout << ((-1) * sum) << "\n";
            return 0;
       }
    }

    else{
        if(A>B){
            long all = (-1) * (A+B);
            long first_end = (B + (B+(all-1)));
            sum = (first_end * all)/2;
            cout << sum << "\n";
            return 0;
        }

        else{
            long all = (-1) * (A+B);
            long first_end = (A + (A+(all-1)));
            sum = (first_end * all)/2;
            cout << sum << "\n";
            return 0;
        }
    }

    return 0;
}