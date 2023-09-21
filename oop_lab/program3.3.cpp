//WAP when type of argument vary 3 changing no of arguments of add()

#include <iostream>
using namespace std;

void SumNum(int A,int B){
    cout<<"sum is: "<<(A+B)<<endl;
}
void SumNum(int A,int B,int C){
    cout<<"sum is: "<<(A+B+C)<<endl;
}
void SumNum(int A,int B,int C,int D){
    cout<<"sum is: "<<(A+B+C+D)<<endl;
}

int main(){
    SumNum(5,10);
    SumNum(5,10,15);
    SumNum(5,10,15,20);
    return 0;
}
