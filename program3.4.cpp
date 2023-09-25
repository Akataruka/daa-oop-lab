//4.	Write a program to read an integer number and print the reverse of that number using recursion.
#include <iostream>
using namespace std;

int reverse(int n){
    static int ans=0;
    if (n<=0){
        return ans;
    }
    int remainder = n % 10;
    ans = ans * 10 + remainder;
    reverse(n / 10);
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Reverse is : "<<reverse(n)<<endl;
    return 0;
}
