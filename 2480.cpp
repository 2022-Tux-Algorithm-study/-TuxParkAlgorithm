//2480번: 주사위 세 개
//1)주사위 눈 3개 입력받기
//case1: 같은 눈 3개 / case2: 같은 눈 2개 / case3: 모두 다른 눈

#include <iostream>
using namespace std;

int main(void)
{
    int a,b,c; //눈 3개 입력 변수 선언

    cin >> a >> b >> c;

    if(a==b && a==c && b==c){
        cout << (10000 + (a*1000) );
    }

    else if(a==b && a != c){
        cout << (1000 + (a*100) );
    }

    else if(a==c && a != b){
        cout << (1000 + (a*100) );
    }

    else if(b==c && b != a){
        cout << (1000 + (b*100) );
    }

    else {
        int max = (a>b)? a:b;
        int max2 = (max>c)? max:c;
        cout << (max2*100);
    }
}