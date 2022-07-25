#include <iostream>
#include <vector>

using namespace std;

int main (void){

    int N;
    cin >> N;

    int cycle = 0;
    int fir,last,num;

    fir = (N % 10) * 10;
    last = ((N / 10) + (N % 10)) % 10;
    num = fir + last;
    cycle ++;

    while(num != N){

        fir = (num % 10) * 10;
        last = ((num / 10) + (num % 10)) % 10;
        num = fir + last;

        cycle ++;

    }

    cout << cycle << "\n";

    return 0;
}