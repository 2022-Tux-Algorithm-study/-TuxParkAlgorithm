#include <iostream>
using namespace std;

int main(void)
{
    int L,P;
    cin >> L >> P;

    int right = L * P;
    int pre_peple;
    int news[5] = {0};

    for(int i=0;i<5;i++){
        cin >> pre_peple;
        news[i] = pre_peple - right;
    }

    for(int i=0;i<5;i++){
        cout << news[i] << " ";
    }


    return 0;
}