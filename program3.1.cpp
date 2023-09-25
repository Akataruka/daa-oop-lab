//1.	Find the GCD of two numbers using recursion.
#include <iostream>
using namespace std;

int gcd(int a,int b){
        if (b!=0){
            b=gcd(b,a%b);
        }
        else{
            return a;
        }
}

int main(){
    int a=5;
    int b=10;
    cout<<gcd(a,b)<<endl;
    return 0;

}


