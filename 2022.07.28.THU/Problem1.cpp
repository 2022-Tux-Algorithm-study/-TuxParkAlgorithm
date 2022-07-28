//60점

#include <iostream>
using namespace std;

int main() {

    int s,e;
    cin >> s >> e;

    while((s<2) || (s>9) || (e<2) || (e>9)){
        cout << "INPUT ERROR!" << "\n";
        cin >> s >> e;
    }

    if(s > e){
        for(int z = 1; z < 10; z++) {
            for (int i = s; i >= e; i--) {
                cout << i << " * " << z << " = ";
                cout.width(2);
                cout << right << z * i;
                cout << "   ";
            }

            cout << "\n";
        }
    }

    else if(s < e){
        for(int z = 1; z<10; z++) {
            for (int i = e; i >= s; i--) {
                cout << i << " * " << z << " = ";
                cout.width(2);
                cout << right << i * z;
                cout << "   ";
            }

            cout << "\n";
        }

    }

    else{
        for(int i=1;i<10;i++){
            cout << s  << " * " << i <<  " = ";
            cout.width(2);
            cout << right << s*i;
        }
    }


    return 0;
}
