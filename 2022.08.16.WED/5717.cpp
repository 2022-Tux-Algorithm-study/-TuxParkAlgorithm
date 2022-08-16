#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int M,F;
    cin >> M >> F;

    vector <int> friends;

    int sum;

    while((M != 0) && (F != 0)){
        sum = M + F;
        friends.push_back(sum);
        cin >> M >> F;
    }

    for(int i=0; i<friends.size();i++){
        cout << friends[i] << "\n";
    }
    return 0;
}