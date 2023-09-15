#include <iostream>
using namespace std;

int main(){
    int n1,n2,i,j,k=0;
    cout<<"enter size of array 1 and 2: "<<endl;
    cin>>n1>>n2;
    int a[n1],b[n2];
    cout<<"Enter array 1"<<endl;
    for(i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter array 2"<<endl;
    for(i=0;i<n2;i++){
        cin>>b[i];
    }
    cout<<"Common elements are: ";

    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
           if(a[i]==b[j]){
                cout<<a[i]<<" ";
           }
        }
    }
    return 0;
}
