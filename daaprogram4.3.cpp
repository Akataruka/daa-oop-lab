//	Write a program to perform binary search using the divide and conquer technique

#include <iostream>
using namespace std;



int bin_search(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x)   return bin_search(arr, l, mid - 1, x);
        return bin_search(arr, mid + 1, r, x);
    }
    return -1;
}
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
    int n,i,key;
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
    cout<<endl<<endl;

    cout<<"Enter the element to search: ";
    cin>>key;
    int ans=bin_search(arr,0,n,key)+1;
    if(ans){
        cout<<"Element found at index: "<<ans-1;
    }
    else{
        cout<<"Element not Found"<<endl;
    }
    return 0;

}

