//구조체 person: 몸무게 x,몸무게 y
//변수: 전체 사람 N,등수 k=1
//벡터 변수: 등수 저장할 변수 v
//전체 사람 N만큼 구조체 선언 

//반복문 두 개 돌리기
    //첫 번째 반복문: 첫 번째부터 차례대로 비교
    //두 번째 반복문: 첫 번째 반복문 대상 제외하고 비교
        //몸무게가 클 경우에만 키 까지 비교
        //키까지 크면 k++ 하고 그 k값을 벡터에 푸쉬백하기
//벡터값 출력하기

#include <iostream>
#include <vector>

using namespace std;

struct person{
    int x;
    int y;
};

int main(void)
{
    int N;
    cin >> N;

    person size[N];

    int k = 1;
    vector <int> v;

    int i,z;

    for(i=0;i<N;i++){
        cin >> size[i].x >> size[i].y;
    }

    for(i=0;i<N;i++){
        for(z=0;z<N;z++){
            if(size[i].x < size[z].x){
                if(size[i].y < size[z].y){
                    k++;
                }
            }
        }
        v.push_back(k);
        k = 1;
    }

    for(i=0;i<N;i++){
        cout << v[i] << " ";
    }

    return 0;

}