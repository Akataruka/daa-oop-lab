#include <iostream>
using namespace std;

int main(){
    int n;
    int i,j,sum=0;
    cout<<"Enter the dimension of matrix:"<<endl;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum=sum+a[i][j];
            }
        }
    }
    cout<<"Sum of diagonal elements are:"<<sum<<endl;
    return 0;
}

