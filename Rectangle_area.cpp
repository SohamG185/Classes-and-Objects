#include <iostream>
using namespace std;
class Rectangle{
    public:
    int Area(int length, int breadth){
        int Area;
        Area = length*breadth;
        return Area;
    }
};
int main(){
    Rectangle R1;
    int l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    cout<<"Area = "<<R1.Area(l,b);
    return 0;
}

/*
Enter length: 5
Enter breadth: 4
Area = 20
*/
