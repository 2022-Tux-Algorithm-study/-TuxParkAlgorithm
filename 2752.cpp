#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int>student(3);

    for(int i=0;i<student.capacity();i++){
        cin >> student[i];
    }

   sort(student.begin(),student.end());

    for(int i=0;i<student.capacity();i++) {
        cout << student[i] << " ";
    }
        return 0;




    return 0;
}