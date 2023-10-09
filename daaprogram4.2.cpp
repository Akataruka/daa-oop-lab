// Write a program to perform Quick sort using the divide and conquer technique.

#include <iostream>
using namespace std;

void swapping(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int part(int *arr,int p,int r){
    int pivot = arr[r];
    int i=p-1;
    int j;

    for(j=p;j<=r-1;j++){
        if(arr[j]<pivot){
            i++;
            swapping(&arr[i],&arr[j]);
        }
    }
    swapping(&arr[i+1],&arr[r]);
    return (i+1);
}

void quick_sort(int *arr,int p,int r){
    if(p<r){
        int q;
        q=part(arr,p,r);
        quick_sort(arr,p,q-1);
        quick_sort(arr,q+1,r);
    }

}

int main(){
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: "<<endl;
    for(i=0 ; i<n;i++){
        cin>>arr[i];
    }

    quick_sort(arr,0,n-1);
    cout<<"Sorted array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
