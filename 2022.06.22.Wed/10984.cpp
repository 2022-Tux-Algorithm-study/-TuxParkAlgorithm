#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    int S,i,z,g;
    float grade;
    int Gsum = 0;
    float GPAsum = 0.0;

    vector <int> point;
    vector <float> GPA;

    for(i=0;i<T;i++){
        cin >> S;
        for(z=0;z<S;z++){
            cin >> g;
            cin >> grade;
            Gsum += g;
            GPAsum += (g * grade);
        }

        point.push_back(Gsum);
        GPA.push_back(GPAsum/Gsum);
        Gsum = 0;
        GPAsum = 0.0;
    }
    
    for(i=0;i<T;i++){
        cout << fixed;
        cout.precision(1);
        cout << point[i] << " " << GPA[i] << "\n";
    }

    return 0;
}