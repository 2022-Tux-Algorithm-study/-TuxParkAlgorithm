#include <iostream>
using namespace std;

int main(void)
{
  //입력받을 배열크기(A),저장횟수(K)가 주어짐
    int A,K;
    cin >> A >> K;

    //저장횟수만큼만 저장할 정렬과 전체 저장횟수가 몇 인지 알아보는 정렬 두 가지를 선언
    int arr[A];
    int brr[A];
    //반복문 변수 선언
    int i,z;
    //배열에 값 넣기
    for(i=0;i<A;i++){
        cin >> arr[i];
        brr[i] = arr[i];
    }

    //저장횟수 변수 선언
    int acount=0,bcount=0;

    //삽입정렬할 때 비교 축? 변수 선언
    int key;


    for(i=1;i<A;i++){
        key = brr[i];
        for(z=(i-1);((z>=0) && (brr[z] > key)); z--){
            brr[z+1] = brr[z];
            bcount ++;
        }
        
        if(brr[z+1] != key){
            brr[z+1] = key;
            bcount ++;
        }
    }

    if(bcount < K){
        cout << -1 << endl;
        return 0;
    }


    for(i=1;i<A;i++){
        key = arr[i];

        for(z=(i-1);((z>=0) && (arr[z] > key)); z--){
            arr[z+1] = arr[z];
            acount ++;

            if(acount == K){
                cout << arr[z+1] << endl;
                return 0;
            } 
        }

        if(arr[z+1] != key){
            arr[z+1] = key;
            acount ++;

            if(acount == K){
                cout << arr[z+1] << endl;
                return 0;
            }
        }

    }
}