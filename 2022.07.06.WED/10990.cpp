#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    
    for(int i=(N-1);i>0;i--){
        cout << " ";
    }
    cout << '*' << '\n';


    for(int i=1;i<N;i++){

        for(int z=(N-i-1);z>0;z--){
            cout << " ";
        }

        cout << '*';

        for(int j=0;j<((2*i)-1);j++){
            cout << " ";
        }

        cout << '*' << '\n';
    }
    

    return 0;
}