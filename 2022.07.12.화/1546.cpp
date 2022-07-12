#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    float a,b;
    cin >> N;

    vector<float>v;

    for(int i=0;i<N;i++){
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<(N-1);i++){
        b = ((v[i]/((float)v[N-1]))*100);
        v[i] = b;
    }

    v[N-1] = 100;
    
    float sum = 0.0;
    for(int i=0;i<N;i++){
        sum += v[i];
    }

    cout << fixed;
    cout.precision(5);
    cout << sum/((float)N);

    
    return 0;
}
