#include <iostream>
#include <vector>
using namespace std;

int main(void)
{   
    int x,y;
    vector <int> Nx;
    vector <int> Ny;

    int sum;
    vector <int> Nsum;

    cin >> x >> y;

    while(x/10 != 0){
        Nx.push_back(x % 10);
        x = x/10;
    }

    Nx.push_back(x%10);

    int size = Nx.size();

    if(size == 1){
        x = Nx[0];
    }

    else if(size == 2){
        x = (Nx[0]*10) + Nx[1];
    }

    else if(size == 3){
        x = (Nx[0]*100) + (Nx[1]*10) + (Nx[2]);
    }

    else if(size == 4){
        x = (Nx[0]*1000) + (Nx[1]*1000) + (Nx[2]*10) + (Nx[3]);
    }


    while(y/10 != 0){
        Ny.push_back(y % 10);
        y = y/10;
    }

    Ny.push_back(y%10);

    size = Ny.size();

    if(size == 1){
        y = Ny[0];
    }

    else if(size == 2){
        y = (Ny[0]*10) + Ny[1];
    }

    else if(size == 3){
        y = (Ny[0]*100) + (Ny[1]*10) + (Ny[2]);
    }

    else if(size == 4){
        y = (Ny[0]*1000) + (Ny[1]*1000) + (Ny[2]*10) + (Ny[3]);
    }

    sum = x + y;


    while(sum/10 != 0){
        Nsum.push_back(sum % 10); 
        sum = sum/10; 
    }

    Nsum.push_back(sum % 10); 

    size = Nsum.size();

    if(size == 1){
        sum = Nsum[0];
    }

    else if(size == 2){
        sum = (Nsum[0]*10) + Nsum[1];
    }

    else if(size == 3){
        sum = (Nsum[0]*100) + (Nsum[1]*10) + (Nsum[2]);
    }

    else if(size == 4){
        sum = (Nsum[0]*1000) + (Nsum[1]*100) + (Nsum[2]*10) + (Nsum[3]);
    }    

    cout << sum << "\n";
    
    return 0;
}