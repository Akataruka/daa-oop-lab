//6.	Write a program to find power of any number using recursion.
#include <iostream>
using namespace std;

int power(int n,int c){
    static int p=1;
    if(c<=0) return p;
    p=p*n;
    power(n,c-1);
    return p;
}

int main(){
    int n,c;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Enter the power : ";
    cin>>c;
    cout<<"the answer is : "<<power(n,c)<<endl;
    return 0;
}

