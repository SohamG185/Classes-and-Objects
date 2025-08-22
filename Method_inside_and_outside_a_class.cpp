#include <iostream>
using namespace std;
class Cube{
    public:
    int Volume(int l, int b, int h){
        int vol = l*b*h;
        return vol;
    }
};
int Volume(int l, int b, int h){
    int vol = l*b*h;
    return vol;
}
int main(){
    Cube c1;
    int a,b,c;
    cout<<"Length: ";
    cin>>a;
    cout<<"Breadth: ";
    cin>>b;
    cout<<"Height: ";
    cin>>c;
    cout<<"Volume of cube with method inside the class = "<<c1.Volume(a,b,c)<<endl;
    cout<<"Voume of cube with method outside the class = "<<Volume(a,b,c);
    return 0;
}

/*
Length: 5
Breadth: 6
Height: 7
Volume of cube with method inside the class = 210
Voume of cube with method outside the class = 210
*/
