//선택정렬1 
//가장 큰/작은 수가 위치해야할 주소를 저장한 후, 전체를 탐색하여 최종적으로 그 수보다 큰/작은 수가 있을 경우 그때만 교환함.

#include <iostream>
using namespace std;

int main(void)
{
    //입력받을 배열크기,교환횟수 변수 선언 후 입력 받기
    int A,K;
    cin >> A >> K;

    //입력받은 배열크기만큼 배열선언
    //arr: 교환횟수만큼만 교환할 배열
    //brr: 전체 교환횟수를 구한 후, 주어진 교환 횟수, K보다 작은 지 체크(작을 경우 -1출력하기 위함)
    int arr[A];
    int brr[A];

    //교환횟수가 몇 인지 확인하기 위한 변수 선언
    int acount = 0;
    int bcount = 0;

    //가장 큰 수가 저장되어야 하는 위치 변수 선언
    int max_index;

    //원소값을 교환할 때 필요한 변수 선언
    int swap;

    //반복문에 사용할 변수 선언
    int i,z;



    //배열크기만큼 반복문 설정 후 arr배열의 원소 입력받기
    //동시에 arr의 원소를 그대로 brr 원소에 대입하기
    for(i=0;i<A;i++){
        cin >> arr[i];
        brr[i] = arr[i];
    }



    //전체 교환횟수가 얼마인지 확인
    for(i=(A-1);i>0;i--){
        max_index = i; //가장 큰 수가 위치해야하는 곳 설정
    //밑의 사이클을 총 몇 번 해야지 오름차순 정렬이 되는 지 생각한 후 반복문 설정
    //버블과 다르게 선택정렬에는 가장 큰/작은 수가 위치한 주소를 저장하는 값이 필요하기 때문에 이 반복문이 그 위치주소를 나타낼 수 있도록 고려해야함.
    //이번 문제 같은 경우에는 가장 큰 수를 저장해야하므로, i는 [A-1]부터 시작하여, [1]까지 돌리면 됨.
    //어차피 [1]이 정해지면 [0]은 이미 정해진 상태임.
        for(z=0;z<i;z++){
        //앞에서부터 순차적으로 그러나 i직전까지만 반복문을 돌린다
        //i직전 까지만 반복문 설정한 이유: 1.이미 i가 맨 끝 자리이기 때문에 i를 고려할 필요가 없음.
            if(brr[max_index]<brr[z]){
                max_index = z;
            }
        }

        if(max_index != i){
        //설정한대로 가장 큰 위치에 가장 큰 수가 들어가지 않아 max_index가 바뀐 경우
            swap = brr[i];
            brr[i] = brr[max_index];
            brr[max_index] = swap;

            bcount++;
        }
    }
    


    //전체 교환 횟수가 K보다 작을 경우 -1 출력
    if(bcount < K){
        cout << -1 << endl;
        return 0;
    }



    //주어진 교환횟수, K만큼만 교환하는 arr
    //이유는 위와 동일
    for(i=(A-1);i>0;i--){
        max_index = i;
        for(z=0; z<i; z++){
            if(arr[max_index]<arr[z]){
                max_index = z;
            }
        }

        if(max_index != i){
            swap = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = swap;

            acount ++;
        }

        if(acount == K){
            cout << arr[max_index] << " " << arr[i] << endl;
            return 0;
        }
    }
}
