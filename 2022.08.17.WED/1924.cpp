#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    int x,y;
    cin >> x >> y;

    string day[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};

    int i;
    int count = 0;

    for(i=1; i<=x; i++){
        if(i == x){
            if(i == 1){
                count = (count + (y-1)) % 7;
                cout << day[count] << "\n";
                return 0;
            }
            else{
                count = (count + y) % 7;
                cout << day[count] << "\n";
                return 0;
            }
        }

        else if(i == 1){
            count += 30;
        }


        else if(i == 2){
            count += 28;
        }
        
        else if((i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12)){
            count += 31;
        }


        else{
            count += 30;
        }

    }

    return 0;
}