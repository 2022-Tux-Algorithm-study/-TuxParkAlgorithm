//변수1: 재귀횟수 N

#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << "\n" ;

    for(int x=0;x<N;x++){
        for(int y=0;y<4;y++){
            for(int z=0;z<x;z++){
                cout << "____";
            }

            if(y==0){
                cout << "\"재귀함수가 뭔가요?\"" << "\n";
            }

            else if(y==1){
                cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << "\n";
            }

            else if(y==2){
                cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << "\n";                
            }

            else{
                cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << "\n";                
            }

        }
    }

    for(int x=0;x<3;x++){
        for(int z=0;z<N;z++){
            cout << "____";
        }   

        if(x==0){
            cout << "\"재귀함수가 뭔가요?\"" << "\n";
        }

        else if(x==1){
            cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << "\n";
        }

        else{
            cout << "라고 답변하였지."<< "\n";
        }
    }

    for(int x=0;x<N;x++){
        for(int z=(N-1);z>x;z--){
                cout << "____";
        }
        
        cout << "라고 답변하였지."<< "\n";
    }



    return 0;
}