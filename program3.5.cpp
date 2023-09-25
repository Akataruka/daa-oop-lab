//5.	Write a program to find sum of digits of a number using Recursive Function.
#include <iostream>
using namespace std;

int sum_dig(int n){
    static int sum=0;
    if(n<=0) return 0;
    sum+=(n%10);
    sum_dig(n/10);
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"sum of digits is : "<<sum_dig(n)<<endl;
    return 0;
}
