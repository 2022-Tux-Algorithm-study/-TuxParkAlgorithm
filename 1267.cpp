#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

//1)통화 개수 N, N만큼의 통화시간 입력받기 -> 벡터로 입력받기
//2)Y: 30의 몫 * 10, 나머지가 있으면 +10 으로 원소값 바꾸기 -> 전체 합 구하기
//3)M: 60의 몫 * 15, 나머지가 있으면 +15 으로 원소값 바꾸기 -> 전체 합 구하기
//4)Y랑 M 비교해서 더 작은 수 출력 + 합한 거 출력

int main(void)
{
    int N,n,y1=0,m1=0;
    vector <int> y;
    vector <int> m;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> n;

        if(n<30){
            y1 = 10;
        }

        else{
            y1 = 10 + ((n/30) * 10);
        }

        y.push_back(y1);
        y1 = 0;


        if(n<60){
            m1 = 15;
        }

        else{
            m1 = 15 + ((n/60) * 15);
        }

        m.push_back(m1);
        m1 = 0;
    }

    int sum_y = accumulate(y.begin(), y.end(), 0);
    int sum_m = accumulate(m.begin(), m.end(), 0);


    if(sum_y>sum_m){
        cout << "M " << sum_m;
    }

    else if (sum_y<sum_m){
        cout << "Y " << sum_y;
    }

    else{
        cout << "Y " << "M " << sum_m;
    }


    return 0;
}