#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int>student(5);

    for(int i=0;i<student.capacity();i++){
        cin >> student[i];
    }

    for(int i=0;i<student.capacity();i++){
       if(student[i]<40){
           student[i]=40;
       }
    }

    int sum=0;
    for(int i=0;i<student.capacity();i++){
       sum+= student[i];
    }

    cout << (sum/5);



    return 0;
}