//1.	Write a program to perform Insertion sort algorithm for any given list of numbers
#include <iostream>
using namespace std;


void insertionsort(int arr[], int n)
{
	int i,key,j;
	for (i=1;i<n;i++) {
		key=arr[i];
		j=i-1;

		while (j>=0 && arr[j]>key) {
			arr[j+1] = arr[j];
			j=j-1;
		}
		arr[j+1]=key;
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
    insertionsort(arr,n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
