#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int T;
    cin >> T;

    long long num1,num2,num3;
    vector <string> result;
    char sign,SameSign;

    for(int i=0;i<T;i++){
        cin >> num1 >> sign >> num2 >> SameSign >> num3;

        switch (sign)
        {
        case '+':
            if((num1 + num2) == num3){
                result.push_back("correct");
            }
            else{
                result.push_back("wrong answer");
            }
            break;

        case '-':
            if((num1 - num2) == num3){
                result.push_back("correct");
            }
            else{
                result.push_back("wrong answer");
            }
            break;

        case '*':
            if((num1 * num2) == num3){
                result.push_back("correct");
            }
            else{
                result.push_back("wrong answer");
            }
            break;

        default:
            if((num1 / num2) == num3){
                result.push_back("correct");
            }
            else{
                result.push_back("wrong answer");
            }
            break;
        }
    }

    for(int i=0;i<T;i++){
        cout << result[i] << "\n";
    }

    return 0;
}