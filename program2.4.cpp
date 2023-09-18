//4.	Write a Program for deletion of an element from the specified location from an Array
#include <iostream>
using namespace std;

int del_ele(int *arr,int key , int n){
    int i=key;
    for(;i<n;i++){
        arr[i]=arr[i+1];
    }
    return n-1;
}



int main(){
    int n,i,key;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the index to be deleted: ";
    cin>>key;
    n = del_ele(arr,key,n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
