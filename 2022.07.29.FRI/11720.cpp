#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    int A,B,sum;
    char comma;
    vector <int> v(T);

    for(int i=0;i<T;i++){
        cin >> A;
        cin >> comma;
        cin >> B;

        v[i] = A+B;
    }

    for(int i=0;i<T;i++){
        cout << v[i] << "\n";

    }
    return 0;
}