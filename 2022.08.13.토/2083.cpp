#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{   
    string name;
    int age,weight;
    vector <string> name2;
    vector <string> club;

    cin >> name >> age >> weight;

    while((name != "#") && (age != 0) && (weight != 0)){
        if((age >17) || (weight >= 80)){
            name2.push_back(name);
            club.push_back("Senior");
        }
        else{
            name2.push_back(name);
            club.push_back("Junior");
        }
        cin >> name >> age >> weight;
    }

    for(int i=0;i<name2.size();i++){
        cout << name2[i] << " " << club[i] << "\n";
    }

    return 0;
}