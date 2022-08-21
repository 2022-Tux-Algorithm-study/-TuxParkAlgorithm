#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{   
    int T;
    cin >> T;

    vector <string> result;
    int A,B,C;
    int max;

    for(int i=0;i<T; i++){
        cin >> A >> B >> C;
        max = (A>B)? A:B;
        max = (max>C)? max:C;

        if(max >= (A+B+C-max)){
            result.push_back("invalid!");
            continue;
        }

        if((A==B) && (A == C)){
            result.push_back("equilateral");
        }

        else if((A != B) && (A != C) && (B != C)){
            result.push_back("scalene");
        }

        else{
            result.push_back("isosceles");
        }
    }

    for(int i=0;i<T; i++){
        cout << "Case #" << i+1 << ": " << result[i] << "\n";
    }

    return 0;
}