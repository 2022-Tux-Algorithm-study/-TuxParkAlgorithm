#include <iostream>
using namespace std;

int main (void)
{
    int N;
    cin >> N;

    int A,B;
    cin >> A >> B;

    int count = 0;


    if(A >= 2){
        while((A>1) && (N>0))
        {
            count ++; 
            N --; 
            A = (A-2); 
        }
    }

    if(B >= 2){
        while((B>0) && (N>0))
        {
            count ++;
            N --;
            B --;

        }
    }
    
    cout << count << "\n";

    return 0;
}