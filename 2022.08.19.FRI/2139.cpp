#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int d,m,y;
    cin >> d >> m >> y;
    vector <int> day;

    int count = 0;

    int i,z;

    while((d != 0) && (m != 0) && (y != 0)){
        if((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)){
            //윤년이면

            for(i=1;i<=m;i++){
                if(i == m){
                    count = count + d;
                    day.push_back(count);
                }

                else if(i == 2){
                    count += 29;
                }

                else if((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12)){
                    count += 31;
                }

                else{
                    count += 30;
                }
            }

            count = 0;
            cin >> d >> m >> y;
            continue;
        }

        else{
            for(i=1;i<=m;i++){
                if(i == m){
                    count = count + d;
                    day.push_back(count);
                }

                else if(i == 2){
                    count += 28;
                }

                else if((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12)){
                    count += 31;
                }

                else{
                    count += 30;
                }
            }

            count = 0;
            cin >> d >> m >> y;
            continue;
        }
    }

    for(int i=0;i<day.size();i++){
        cout << day[i] << "\n";
    }

    return 0;
}