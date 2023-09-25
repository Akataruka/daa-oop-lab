
//3.	Write a program to generate Fibonacci series using recursive function.#include <iostream>
#include <iostream>
using namespace std;

int fibbo(int n){
    if (n==0 || n==1){
         return 1;
    }
    else{
       return fibbo(n-1)+fibbo(n-2);
    }
}

int main(){
    int n,i;
    cout<<"Enter the number of fibbo series: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<fibbo(i)<<" ";
    }
    return 0;
}


