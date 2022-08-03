#include <iostream>
#include <cmath>
using namespace std;

int prime_number(int num);

int main(void)
{   
    int M,N;
    cin >> M;
    cin >> N;

    int sum = 0;
    int count = 0, min;
    
    for(int i = M; i<=N;i++){
        
        if(i == 1){
            continue;
        }
        
        int pm = prime_number(i);

        if(pm == 1){
            sum += i;
            count ++;
            if(count == 1){
                min = i;
            }
        }
    }

    if(count == 0){
        cout << -1 << "\n";
        return 0;
    }

    cout << sum << "\n" << min << "\n";

    return 0;
}

int prime_number(int num){
    int count = 0;

    for(int i = 2;i<=sqrt(num);i++){
        if(num % i == 0){
            return -1;
        }
    }

    return 1;
}