//버블정렬2
#include <iostream>
using namespace std;

int main(void)
{
    //배열크기와 교환 횟수 변수 선언 후, 입력 받기
    int A,K;
    cin >> A >> K;

    //입력받은 배열 크기만큼 배열선언
    //이때, arr은 교환횟수만큼 정렬하기 위해 선언한 것이고,
    //brr은 전체 교환횟수가 얼마인지 체크하여 주어진 교환횟수 K보다 작은지 확인하기 위함.(작으면 -1을 출력해야한다는 조건이 있기 때문)
    int arr[A];
    int brr[A];

    //반복문에 사용되는 변수 선언
    int i,z,j;

    //반복횟수를 체크하기 위한 반복횟수 변수 선언
    int acount = 0;
    int bcount = 0;

    //원소 교환을 위한 swap 변수 선언
    int swap;

    //배열크기만큼 반복문 설정하여 arr의 원소를 차례대로 입력받고
    //입력받은 arr의 원소를 그대로 brr의 원소에 대입함
    for(i=0;i<A;i++){
        cin >> arr[i];
        brr[i] = arr[i];
    }

    //전체 교환횟수가 몇인지 확인
    for(i=0;i<(A-1);i++){
    //전체 이 과정을 몇 번 해야하는 지 체크하기 위한 반복문
    //한 번 할 때 마다 끝자리가 정해지고, 두 번째 자리만 정해지면 첫 번째자리는 자동으로 정해지기 때문에 굳이 A번이 아닌 A-1번만 하는 것임.
        for(z=0;z<(A-i-1);z++){
        //한 번 할 때 마다 끝자리는 가장 큰 수로 정렬되기 때문에 정렬되기 전까지만 반복문 확인하면 됨.
        //-1을 추가적으로 한 이유는 어차피 밑에서 z+1이 실행되므로 그 다음 원소까지 비교 가능하게함. 
            if(brr[z]>brr[z+1]){
                swap = brr[z];
                brr[z] = brr[z+1];
                brr[z+1] = swap;

                bcount ++;
            }
        }
    }

    //전체 교환 횟수가 K보다 작을 경우 -1 출력
    if(bcount < K){
        cout << -1 << endl;
        return 0;
    }

    //주어진 배열,arr을 교환횟수 K만큼 교환함.
    for(int i=0;i<(A-1);i++){
        for(int z=0;z<(A-i-1);z++){
            if(arr[z]>arr[z+1]){
                swap = arr[z];
                arr[z] = arr[z+1];
                arr[z+1] = swap;

                acount ++;
            }

            if(acount == K){
                for(j=0;j<A;j++){
                    cout << arr[j] <<" ";
                }
                return 0;
            }
        }
    }
}