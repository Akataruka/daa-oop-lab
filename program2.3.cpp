//3.	Write a program find GCD of two numbers using Euclidean algorithm
#include <iostream>
using namespace std;

int gcd(int a,int b){
    int gcd=a%b;
    while (gcd>0){
        a=b;
        b=gcd;
        gcd=a%b;
    }
    return b;

}

int main(){
    int a,b,r;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    r=gcd(a,b);
    cout<<"GCD is : "<<r<<endl;

    return 0;
}
