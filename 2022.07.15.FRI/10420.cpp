//사귀기 시작한 날짜: 2014.04.02
//변수선언) day(기념일변수),Y=2014,M,D,m,acc=0;
//if     ] 기념일 날짜가 29이하면 2에다가 더하고 -1 returm

//if else] 기념일 날짜가 30이상 274이하면 return
//         29 더한 상태에서 
//while 누적값이 기념일보다 작을 경우까지
//         if]5,7,8,10,12 일경우 
//              if]그 전의 저장값에서 31 더했을 때 기념일 값보다 작거나 같을 경우(년: 그대로,월: i값, 일: 기념알-누적값)
//              else] +31
//         else] 6,9,10 일경우
//              if]그 전의 저장값에서 30 더했을 때 기념일 값보다 작거나 같을 경우(년: 그대로,월: i값, 일: 기념알-누적값)
//              else] +30

//else] 기념일 날짜가 275 이상이면 return
//while 누적값이 기념일보다 작을 경우까지
//m = 1 설정
//           if] 2 일경우
//               if]윤년일 경우
//                  if]그 전의 저장값에서 29 더했을 때 기념일 값보다 작거나 같을 경우(년: 그대로,월: i값, 일: 기념알-누적값)
//                  else] +29
//               else] 윤년 아닐 경우
//                  if]그 전의 저장값에서 28 더했을 때 기념일 값보다 작거나 같을 경우(년: 그대로,월: i값, 일: 기념알-누적값)
//                  else] +28
//      else if]5,7,8,10,12 일경우 
//              if]그 전의 저장값에서 31 더했을 때 기념일 값보다 작거나 같을 경우(년: 그대로,월: i값, 일: 기념알-누적값)
//              else] +31
//         else] 6,9,10 일경우
//              if]그 전의 저장값에서 30 더했을 때 기념일 값보다 작거나 같을 경우(년: 그대로,월: i값, 일: 기념알-누적값)
//              else] +30
//Y++,i++
//if] m==13이면 m=1로 바꾸기

//값 출력후 return;

#include <iostream>
using namespace std;

int main(void)
{
    int day;
    cin >> day;

    int Y=2014,M=4,D=2,m,acc=0;

    if(day <=29){
        D += (day-1);
        if(D<10){
            cout << Y << "-" << "0" << M << "-" << "0" << D << "\n";
            return 0;
        }
        cout << Y << "-" << "0" << M << "-" << D << "\n";
    }

    else if((day>29)&&(day<=274)){
        acc = 29;

        for(int i=5;i<=12;i++){
            if((i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12)){
                if((acc+31)>=day){
                    D = day - acc;
                    if((i<10) && (D<10)){
                        cout << Y << "-" << "0" << i << "-" << "0" << D << "\n";
                        return 0;
                    }
                    else if((i<10) && (D>9)){
                        cout << Y << "-" << "0" << i << "-" << D << "\n";
                        return 0;
                    }
                    else if((i>9) && (D<10)){
                        cout << Y << "-" << i << "-" << "0" << D << "\n";
                        return 0;
                    }
                    else{
                        cout << Y << "-" << i << "-" << D << "\n";
                        return 0;
                    }
                }
                else{
                    acc += 31;
                }
            }

            else{
                if((acc+30)>=day){
                    D = day - acc;
                    if((i<10) && (D<10)){
                        cout << Y << "-" << "0" << i << "-" << "0" << D << "\n";
                        return 0;
                    }
                    else if((i<10) && (D>9)){
                        cout << Y << "-" << "0" << i << "-" << D << "\n";
                        return 0;
                    }
                    else if((i>9) && (D<10)){
                        cout << Y << "-" << i << "-" << "0" << D << "\n";
                        return 0;
                    }
                    else{
                        cout << Y << "-" << i << "-" << D << "\n";
                        return 0;
                    }
                }
                else{
                    acc += 30;
                }   
            }
        }
    }


    else{
        acc = 29;
        m = 5;

        while(1){
            if(m==2){
                if((Y % 4 ==0) && (Y % 100 != 0) || (Y % 400 == 0)){
                    if((acc+29)>=day){
                        D = day - acc;

                        if((m<10) && (D<10)){
                            cout << Y << "-" << "0" << m << "-" << "0" << D << "\n";
                            return 0;
                        }
                        else if((m<10) && (D>9)){
                            cout << Y << "-" << "0" << m << "-" << D << "\n";
                            return 0;
                        }
                        else if((m>9) && (D<10)){
                            cout << Y << "-" << m << "-" << "0" << D << "\n";
                            return 0;
                        }
                        else{
                            cout << Y << "-" << m << "-" << D << "\n";
                            return 0;
                        }
                    }

                    else{
                        acc += 29;
                    }
                }
                else{
                    if((acc+28)>=day){
                        D = day - acc;
                        if((m<10) && (D<10)){
                            cout << Y << "-" << "0" << m << "-" << "0" << D << "\n";
                            return 0;
                        }
                        else if((m<10) && (D>9)){
                            cout << Y << "-" << "0" << m << "-" << D << "\n";
                            return 0;
                        }
                        else if((m>9) && (D<10)){
                            cout << Y << "-" << m << "-" << "0" << D << "\n";
                            return 0;
                        }
                        else{
                            cout << Y << "-" << m << "-" << D << "\n";
                            return 0;
                        }
                    }

                    else{
                        acc += 28;
                    }
                }
            }

            else if((m == 1) ||(m == 3) ||(m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)){
                if((acc+31)>=day){
                    D = day - acc;
                        if((m<10) && (D<10)){
                            cout << Y << "-" << "0" << m << "-" << "0" << D << "\n";
                            return 0;
                        }
                        else if((m<10) && (D>9)){
                            cout << Y << "-" << "0" << m << "-" << D << "\n";
                            return 0;
                        }
                        else if((m>9) && (D<10)){
                            cout << Y << "-" << m << "-" << "0" << D << "\n";
                            return 0;
                        }
                        else{
                            cout << Y << "-" << m << "-" << D << "\n";
                            return 0;
                        }
                }
                else{
                    acc += 31;
                }
            }

            else{
                if((acc+30)>=day){
                    D = day - acc;
                        if((m<10) && (D<10)){
                            cout << Y << "-" << "0" << m << "-" << "0" << D << "\n";
                            return 0;
                        }
                        else if((m<10) && (D>9)){
                            cout << Y << "-" << "0" << m << "-" << D << "\n";
                            return 0;
                        }
                        else if((m>9) && (D<10)){
                            cout << Y << "-" << m << "-" << "0" << D << "\n";
                            return 0;
                        }
                        else{
                            cout << Y << "-" << m << "-" << D << "\n";
                            return 0;
                        }
                }
                else{
                    acc += 30;
                }
                
            }

            m++;

            if(m == 13){
                m = 1;
                Y++;
            }
        }
    }
}