#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int N,size;
    cin >> N;
    string num;
    int last_num;

    vector <string> result;

    for(int i=0;i<N;i++){
        cin >> num;
        size = num.length();
        last_num = num[size-1] - '0';

        if((last_num == 0) || (last_num == 2) || (last_num == 4) || (last_num == 6) || (last_num == 8)){
            result.push_back("even");
        }

        else{
            result.push_back("odd");
        }
    }

    for(int i=0;i<N;i++){
        cout << result[i] << "\n";
    }

    return 0;
}