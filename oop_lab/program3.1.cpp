//Add two complex numbers passing objects to functions

#include <iostream>
using namespace std;

class complex{
public:
    float x,y;
};

void add(complex c1,complex c2){
    cout<<"Addition is:"<<(c1.x+c2.x)<<"+"<<(c1.y+c2.y)<<"i"<<endl;
}

int main(){
    complex c1,c2;
    cout<<"Enter (X+ iY) X: ";
    cin>>c1.x;
    cout<<"Y: ";
    cin>>c1.y;
    cout<<"Enter (X+ iY) X: ";
    cin>>c2.x;
    cout<<"Y: ";
    cin>>c2.y;
    add(c1,c2);
    return 0;
}
