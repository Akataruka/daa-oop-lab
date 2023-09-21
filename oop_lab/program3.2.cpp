//calculate simple interest using class

#include <iostream>
using namespace std;

class simple_interest{
    float p,r,t;

public:
    void sim_int(){
        cout<<"Enter the principal: ";
        cin>>p;
        cout<<"Enter the rate of interest: ";
        cin>>r;
        cout<<"Enter the time period: ";
        cin>>t;
        cout<<"Simple interest is: "<<((p*r*t)/100)<<endl;
    }
};
    int main(){
        simple_interest s1;
        s1.sim_int();
        return 0;
    }
