//2755: 이번학기 평점은 몇 점?
//변수1) 전체 과목 수 0
//구조체) 과목명(string),학점(int),성적(spring),학점*성적 0
//변수2) 구조체를 벡터로 할당 0
//변수3) 각 구조체의 '학점' 모두 더해서 저장할 변수
//변수4) 각 구조체의 '학점*성적' 모두 더해서 저장할 변수
//변수5) 학점 변수

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Std{
    public:
        string name;
        int hakjum;
        string grade;
        float hak_grade;
};

int main(void)
{
    int N;
    cin >> N;

    Std s[N];

    for(int i=0;i<N;i++){
        cin >> s[i].name;
        cin >> s[i].hakjum;
        cin >> s[i].grade;

        if(s[i].grade == "A+"){
            s[i].hak_grade = s[i].hakjum * 4.3;
        }
        else if(s[i].grade == "A0"){
            s[i].hak_grade = s[i].hakjum * 4.0;
        }
        else if(s[i].grade == "A-"){
            s[i].hak_grade = s[i].hakjum * 3.7;
        }
        else if(s[i].grade == "B+"){
            s[i].hak_grade = s[i].hakjum * 3.3 ;
        }
        else if(s[i].grade == "B0"){
            s[i].hak_grade = s[i].hakjum * 3.0;
        }
        else if(s[i].grade == "B-"){
            s[i].hak_grade = s[i].hakjum * 2.7;
        }
        else if(s[i].grade == "C+"){
            s[i].hak_grade = s[i].hakjum * 2.3;
        }
        else if(s[i].grade == "C0"){
            s[i].hak_grade = s[i].hakjum * 2.0;
        }
        else if(s[i].grade == "C-"){
            s[i].hak_grade = s[i].hakjum * 1.7;
        }
        else if(s[i].grade == "D+"){
            s[i].hak_grade = s[i].hakjum * 1.3;
        }
        else if(s[i].grade == "D0"){
            s[i].hak_grade = s[i].hakjum * 1.0;
        }
        else if(s[i].grade == "D-"){
            s[i].hak_grade = s[i].hakjum * 0.7;
        }
        else if(s[i].grade == "F"){
            s[i].hak_grade = s[i].hakjum * 0.0;
        }
    }

    int sum = 0;
    float hg = 0.0;
    float final;

    for(int i=0;i<N;i++){
        sum += s[i].hakjum;
        hg  += s[i].hak_grade;
    }

    final = hg/(float)sum;

    cout << fixed;
    cout.precision(2);
    cout << final;
}

