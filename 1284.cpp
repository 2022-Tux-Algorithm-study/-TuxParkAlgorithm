#include <iostream>
#include <vector>
using namespace std;

//변수: 입력받을 숫자 N -> N만큼 벡터(v) 만들기, 여백 변수(space)
//여백: (오른쪽+왼쪽=2) + (숫자개수-1) + (1=2,0=4,나머지=3)
//각 숫자 얻는 법 -> 총 4자리
//n을 10/100/1000/10000으로 나누어서 몫이 0 숫자개수(여백변수 더하기) 알기
//1의    자리: 10으로 나눈 나머지
//10의   자리: (10으로 나눈 몫) -> (그 몫을 다시 10으로 나눈 나머지)
//100의  자리: (100으로 나눈 몫) -> (그 몫을 다시 10으로 나눈 나머지)
//1000의 자리: (1000으로 나눈 몫) -> (그 몫을 다시 10으로 나눈 나머지)

int main(void)
{
    int N,space=0,w=0,count=0;
    vector <int> v;

    while((cin >> N) && N != 0){

        ++count;

        //양 옆 여백
        space = 2;

        //숫자 사이 공백
        //숫자마다 공간

        if((N/10) == 0) //1의 자리
        {
            if(N == 1){
                space += 2;
            }

            else{
                space += 3;
            }

            v.push_back(space);
        }

        else if((N/100) == 0) //10의 자리
        {
            space += 1;

            w = N%10;
            if(w == 1){
                space += 2;
            }

            else if(w == 0){
                space += 4;
            }

            else{
                space += 3;
            }

            w = N/10;
            if(w == 1){
                space += 2;
            }

            else if(w == 0){
                space += 4;
            }

            else{
                space += 3;
            }

            v.push_back(space);
        }

        else if((N/1000) == 0) //100의 자리
        {
            space += 2;

            w = N%10;
            if(w == 1){
                space += 2;
            }

            else if(w == 0){
                space += 4;
            }

            else{
                space += 3;
            }

            w = ((N/10) % 10);
            if(w == 1){
                space += 2;
            }

            else if(w == 0){
                space += 4;
            }

            else{
                space += 3;
            }

            w = (N/100);
            if(w == 1){
                space += 2;
            }

            else if(w == 0){
                space += 4;
            }

            else{
                space += 3;
            }

            v.push_back(space);
        }

        else if(N/10000 == 0) //1000의 자리
        {
            space += 3;

            w = N%10;
            if(w == 1){
                space += 2;
            }

            else if(w == 0){
                space += 4;
            }

            else{
                space += 3;
            }

            w = ((N/10) % 10);
            if(w == 1){
                space += 2;
            }

            else if(w == 0){
                space += 4;
            }

            else{
                space += 3;
            }

            w = ((N/100)%10);
            if(w == 1){
                space += 2;
            }

            else if(w == 0){
                space += 4;
            }

            else{
                space += 3;
            }

            w = (N/1000);
            if(w == 1){
                space += 2;
            }

            else if(w == 0){
                space += 4;
            }

            else{
                space += 3;
            }

            v.push_back(space);
        }
    }

    for(int i=0; i<count; i++){
        cout << v[i] << endl;
    }

    return 0;
}