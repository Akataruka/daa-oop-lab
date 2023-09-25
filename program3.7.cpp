//7.	Write a program to calculate length of the string using recursion.
#include <iostream>
using namespace std;

int recLen(char* str)
{
    if (*str == '\0')
        return 0;
    else
        return 1 + recLen(str + 1);
}

int main(){
    char s[]="hello";
    cout<<recLen(s)<<endl;

    return 0;
}
