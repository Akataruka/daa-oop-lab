#include <iostream>
using namespace std;

void swapnum(int *a , int *b){

    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}


int main(){
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    swapnum(&a,&b);
    cout<<"Swapped numbers are: "<<a<<" "<<b<<endl;
    return 0;
}
