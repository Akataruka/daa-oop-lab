//5.	Write a program to swap value of two variables using pointer.
#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Address of "<<a<<"before swapping :"<<&a<<endl;
    cout<<"Address of "<<b<<"before swapping :"<<&b<<endl;

    swap(&a,&b);
    cout<<"Address of "<<b<<"before swapping :"<<&b<<endl;
    cout<<"Address of "<<a<<"before swapping :"<<&a<<endl;
    return 0;
}
