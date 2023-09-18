//2.	Write a program to perform Bubble sort algorithm for any given list of numbers
#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;

}

void bubblesort(int *arr , int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

}



int main(){
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

