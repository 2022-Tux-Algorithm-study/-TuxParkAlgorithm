#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int A,B;
    int AW = 0, BW = 0;

    for(int i=0; i<N; i++){
        cin >> A >> B;

        if(A > B){
            AW++;
        }
        else if(A < B){
            BW++;
        }
        else{
            continue;
        }
    }

    cout << AW << " " << BW << "\n";


    return 0;
}