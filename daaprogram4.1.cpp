//	Write a program to perform merge sort using the divide and conquer technique

#include <iostream>
using namespace std;

void merge(int *arr,int p,int q,int r){

    int n1=q-p+1;
    int n2=r-q;
    int i,j,k;
    int l1[n1+1],l2[n2+1];
    for(i=0;i<n1;i++){
        l1[i]=arr[i+p];
    }
    for( i=0;i<n2;i++){
        l2[i]=arr[i+q+1];
    }
    l1[n1]=1000000;
    l2[n2]=1000000;
    k=p;
    i=0;
    j=0;
    while(k<=r){
        if(l1[i]<=l2[j]){
            arr[k++]=l1[i++];
        }
        else{
            arr[k++]=l2[j++];
        }
    }
}

void merge_sort(int *arr,int p,int r){

    if(p<r){
        int q=(p+r)/2;
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        merge(arr,p,q,r);
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
    merge_sort(arr,0,n);
    cout<<"Sorted array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
