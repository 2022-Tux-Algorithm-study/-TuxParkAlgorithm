#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    vector <int> score(5);
    vector <int> differ;
    vector <int> sum;
    int calcul;

    for(int i=0; i<T; i++){
        for(int z=0; z<5;z++){
            cin >> score[z];
        }
        sort(score.begin(),score.end());
        calcul = score[3] - score[1];
        differ.push_back(calcul);
        sum.push_back(score[1] + score[2] + score[3]);
    }

    for(int i=0; i<T; i++){
        if(differ[i] >= 4){
            cout << "KIN" << "\n";
        }

        else{
            cout << sum[i] << "\n";
        }
    }

    return 0;
}