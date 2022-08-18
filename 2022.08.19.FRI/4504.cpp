#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector <string> result;
    vector <int> NUM;

    int num;
    cin >> num;
    NUM.push_back(num);

    while(num != 0){

        if(num % N == 0){
            result.push_back(" is a multiple of ");
        }

        else{
            result.push_back(" is NOT a multiple of ");
        }

        cin >> num;
        NUM.push_back(num);
    }

    for(int i=0;i<result.size();i++){
        cout << NUM[i] << result[i] << N << ".\n";
    }    

    return 0;
}