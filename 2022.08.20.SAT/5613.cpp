#include <iostream>
using namespace std;

int main(void)
{
    int num;
    char sign;
    int result;

    cin >> num;
    result = num;
    cin >> sign;

    while(sign != '='){
        cin >> num;

        switch (sign)
        {
        case '+':
            result = result + num;
            break;
        
        case '-':
            result = result - num;
            break;

        case '*':
            result = result * num;
            break;

        default:
            result = result / num;
            break;
        }

        cin >> sign;
    }

    cout << result << "\n";
    
    return 0;
}