#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int T,A,B;
    cin >> T;

    vector <int> v;

    for(int i=0;i<T;i++){
        cin >> A >> B;
        v.push_back(A+B);
    }

    for(int i=0;i<T;i++){
        cout << v[i] << "\n";
    }

    return 0;
}