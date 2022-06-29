//2439번: 별찍기2
#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for(int y=0; y<N; y++){

        for(int z = 0; z<(N-y-1); z++){
            cout << ' ';
        }
            for(int x=0; x<y+1; x++){
                cout << '*';
            }

            cout << "\n";
    }

    return 0;
}
