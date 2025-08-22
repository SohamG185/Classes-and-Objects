#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
};
int main(){
    Student S1;
    S1.name = "Soham Garge";
    S1.age = 19;
    cout<<S1.name<<endl;
    cout<<S1.age<<endl;
    return 0;
}

/*
Soham Garge
19
*/
