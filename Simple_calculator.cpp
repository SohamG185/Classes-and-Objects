#include <iostream>
using namespace std;
class Calculator{
    public:
    int addition(int num1,int num2){
        int sum;
        sum = num1+num2;
        return sum;
    }
    int subtraction(int num1,int num2){
        int diff;
        diff = num1-num2;
        return diff;
    }
    float multiplication(float num1,float num2){
        float prod = num1*num2;
        return prod;
    }
    float division(float num1,float num2){
        float Div = num1/num2;
        return Div;
    }
};
int main(){
    Calculator c1;
    float a,b;
    cout<<"No.1: ";
    cin>>a;
    cout<<"No2: ";
    cin>>b;
    cout<<"Sum = "<<c1.addition(a,b)<<endl;
    cout<<"Difference = "<<c1.subtraction(a,b)<<endl;
    cout<<"Product = "<<c1.multiplication(a,b)<<endl;
    cout<<"Division = "<<c1.division(a,b)<<endl;
    return 0;
}

/*
No.1: 5
No2: 6
Sum = 11
Difference = -1
Product = 30
Division = 0.833333
*/
