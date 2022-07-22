#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    int a,b,c;
    vector <string> answer;

    cin >> a >> b >> c;

    while((a != 0) && (b != 0) && (c != 0)){
        if((a*a) == (b*b) + (c*c)){
            answer.push_back("right");
        }

        else if((b*b) == (a*a) + (c*c)){
            answer.push_back("right");
        }

        else if((c*c) == (b*b) + (a*a)){
            answer.push_back("right");
        }

        else{
            answer.push_back("wrong");
        }

        cin >> a >> b >> c;

    }

    for(int i=0;i<answer.size();i++){
        cout << answer[i] << "\n";
    }

    return 0;
}