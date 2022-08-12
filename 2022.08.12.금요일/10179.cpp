#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(void)
{   
    int T;
    cin >> T;

    double discount,price;

    vector <double> dis_price(T);

    for(int i=0;i<T;i++){
        cin >> price;
        discount = (round( (price * (0.2)) * 100)) / 100;
        dis_price[i] = price - discount;
    }

    for(int i=0;i<T;i++){
        cout << fixed;
        cout.precision(2);
        cout << "$" << dis_price[i] << "\n";
    }


    return 0;
}