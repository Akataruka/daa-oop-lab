//2.	Write a program to perform Insertion sort algorithm for any given list of numbers using recursive function.
#include <iostream>
using namespace std;

void insertionsort(int arr[],int n){

    if(n<=1) return;
    insertionsort(arr,n-1);
    int last=arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>last){
            arr[j+1]=arr[j];
            j--;
    }
    arr[j+1]=last;
}

int main(){
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    insertionsort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}


