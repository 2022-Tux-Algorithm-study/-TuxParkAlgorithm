//변수1~3) 오늘 날짜) Y,M,D
//변수4~6) 디데이 날짜) YD,MD,DD
//오늘 날짜와 디데이 날짜 입력 받기
//if  ] 1000년 이상인 경우 -> gg 출력
//else] 1000년 이하인 경우
//      if] 연도가 같을 경우
//          if]월이 같을 경우
//              d_day=DD-D
//          else]월이 다를 경우
//              1)M의 남은 날짜랑 MD의 전 날짜 + 사이에 있는 월만큼 더하기
//      else] 연도가 다를 경우

#include <iostream>
using namespace std;

int main(void)
{
    int Y,M,D,YD,MD,DD;
    int d_day = 0;

    cin >> Y >> M >> D;
    cin >> YD >> MD >> DD;

    //1000년 이상인 경우
    if((((Y+1000)==YD)&&(M <= MD)&&(D <= DD)) || (((Y+1000)<YD))){
        cout << "gg" << "\n";
    }

    //1000년 이하인 경우
    else{
        //연도가 같을 경우
        if(Y == YD){
            //월이 같을 경우
            if(M == MD){
                d_day = DD-D;
                cout << "D-" << d_day << "\n";
                return 0;
            }
            //월이 다를 경우
            else{
                //사이에 있는 달
                for(int i=(M+1);i<MD;i++){
                    if(i==2){
                        if((Y%4 == 0) && (Y%100 != 0) || (Y%400 == 0)){
                            d_day += 29; 
                        }
                        else{
                            d_day += 28;
                        }
                    }

                    else if((i==3) || (i==5) || (i==7) || (i==8) || (i==10) || (i==12)){
                            d_day += 31;
                    }

                    else{
                            d_day += 30;
                    }
                }

                //오늘의 달
                if(M==2){
                        if((Y%4 == 0) && (Y%100 != 0) || (Y%400 == 0)){
                            d_day += (29-D); 
                        }
                        else{
                            d_day += (28-D);
                        }
                }

                else if((M == 1) || (M==3) || (M==5) || (M==7) || (M==8) || (M==10) || (M==12)){
                    d_day += (31-D);
                }

                else{
                    d_day += (30-D);
                }

                //디데이의 달
                d_day += DD;
                

                cout << "D-" << d_day << "\n";
                return 0;

            }
        }

        //연도가 다를 경우
        else{

        //사이에 있는 연도만큼 일 수 계산 
        for(int i=(Y+1);i<YD;i++){
            if((i%4 == 0) && (i%100 != 0) || (i%400 == 0)){
                d_day += 366; 
            }
            else{
                d_day += 365;
            }
        }

        //오늘의 월에서 얼만큼 남았는 지 포함 (오늘 제외)
        if(M==2){
            if((Y%4 == 0) && (Y%100 != 0) || (Y%400 == 0)){
                d_day += (29-D); 
            }
            else{
                d_day += (28-D);
            }
        }

        else if((M == 1) || (M==3) || (M==5) || (M==7) || (M==8) || (M==10) || (M==12)){
            d_day += (31-D);
        }

        else{
            d_day += (30-D);
        } 

        //오늘에서 남은 월만큼 
        for(int i=(M+1); i<=12; i++){
            
            if(i==2){
                if((Y%4 == 0) && (Y%100 != 0) || (Y%400 == 0)){
                    d_day += 29; 
                }
                else{
                    d_day += 28;
                }
            }

            else if((i==3) || (i==5) || (i==7) || (i==8) || (i==10) || (i==12)){
                d_day += 31;
            }

            else{
                d_day += 30;
            }
        }


        //디데이의 월에서 쓴 일만큼
        //디데이가 1월일 때
        if(MD == 1){
            d_day += DD;
            cout << "D-" << d_day << "\n";
            return 0;
        }

        //디데이가 2월 이후 일 때
        d_day += DD;

        //디데이 앞의 월
        for(int i=1; i<MD; i++){
            if(i==2){
                if((YD%4 == 0) && (YD%100 != 0) || (YD%400 == 0)){
                    d_day += 29; 
                }
                else{
                    d_day += 28;
                }
            }

            else if((i==1) || (i==3) || (i==5) || (i==7) || (i==8) || (i==10) || (i==12)){
                d_day += 31;
            }

            else{
                d_day += 30;
            }
        }

        cout << "D-" << d_day << "\n";
        return 0;

    }
}

}
