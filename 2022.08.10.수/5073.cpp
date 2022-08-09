#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    int A,B,C;
    cin >> A >> B >> C;

    vector <string> v;

    while((A != 0) && (B != 0) && (C != 0)){
        int max;
        max = (A>B)? A:B;
        max = (max>C)? max:C;
        int TwoSum = (A+B+C)-max;
        
        if(max >= TwoSum){
            v.push_back("Invalid");
            cin >> A >> B >> C;
            continue;
        }

        else if((A == B) && (A == C)){
            v.push_back("Equilateral");
            cin >> A >> B >> C;
            continue;
        }
        else if((A != B) && (A != C) && (B != C)){
            v.push_back("Scalene");
            cin >> A >> B >> C;
            continue;
        }
        else {
            v.push_back("Isosceles");
            cin >> A >> B >> C;
            continue;
        }
    }

    for(int i=0;i<v.size();i++){
        cout << v[i] << "\n";    
    }
    
    }
