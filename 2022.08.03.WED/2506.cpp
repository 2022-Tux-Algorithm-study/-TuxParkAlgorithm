#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    int score[N];
    int count = 1;
    int sub = 0;

    for(int i=0;i<N;i++){
        cin >> score[i];

        if(score[i] == 1){
            sub += count;
            count ++;
        }

        else{
            count = 1;
        }
    }

    cout << sub << "\n";

    return 0;
}