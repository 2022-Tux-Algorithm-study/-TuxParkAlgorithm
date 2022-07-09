#include <iostream>
using namespace std;

int main(void)
{   
    int N;
    cin >> N;

    int i,z,j;

    if(N == 1){
        cout << "*";
        return 0;
    }

    for(i=2;i<=(N+1);i++){
      if((i%2)==0){
        cout << "*";
        for(z=i;z<=(N+i-2);z++){
            cout << " *";
        }
        cout << "\n";
      }

      else{
        cout << " ";
        for(z=i;z<=(N+i-2);z++){
            cout << "* ";
        }
        cout << "*" << "\n";
      }

    }

    return 0;
}