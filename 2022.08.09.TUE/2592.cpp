#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector <int> average(10);
    int count[10] = {0};
    int sum = 0;

    for(int i=0;i<10;i++){
        cin >> average[i];
        sum += average[i];

        for(int z=0; z<i; z++){
            if(average[z] == average[i]){
                count[i]++;
            }
        }
    }

    int max_index = 0;
    for(int z=1;z<10;z++){
        if(count[max_index] < count[z]){
            max_index = z;
        }
    }      

    cout << sum/10 << "\n" << average[max_index] << "\n";

    return 0;
}