#include <iostream>
using namespace std;


int dec(int bin){
    if (!bin) return 0;
    if (bin==1) return 1;
    return (dec(bin/10)*2+(bin%10));
}

int main(){
    int bin;
    cout<<"Enter binary:"<<endl;
    cin>>bin;
    cout<<"Decimal "<<dec(bin)<<endl;
    return 0;
}

