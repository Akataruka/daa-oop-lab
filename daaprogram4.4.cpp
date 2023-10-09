// The Max-Min Problem in the divide and conquer algorithm analysis is finding the maximum and minimum value in an array.

#include <iostream>
using namespace std;

void swapping(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void max_heapify(int arr[], int N, int i)
{

    int largest = i;

    int l = 2 * i + 1;

    int r = 2 * i + 2;

    if (l < N && arr[l] > arr[largest])
        largest = l;

    if (r < N && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swapping(&arr[i], &arr[largest]);

        max_heapify(arr, N, largest);
    }
}


void min_heapify(int arr[], int N, int i)
{

    int smallest = i;

    int l = 2 * i + 1;

    int r = 2 * i + 2;

    if (l < N && arr[l] < arr[smallest])
        smallest = l;

    if (r < N && arr[r] < arr[smallest])
        smallest = r;

    if (smallest != i) {
        swapping(&arr[i], &arr[smallest]);

        min_heapify(arr, N, smallest);
    }
}

void max_min(int arr[], int N,int *ans){
    for (int i = N / 2 - 1; i >= 0; i--)
        max_heapify(arr, N, i);
    swapping(&arr[0],&ans[0]);
    for (int i = N / 2 - 1; i >= 0; i--)
        min_heapify(arr, N, i);
    swapping(&arr[0],&ans[1]);
    return ;
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
    int ans[2];
    ans[0]=arr[0];
    ans[1]=arr[0];
    max_min(arr,n,ans);
    cout<<"MAX is : "<<ans[0]<<endl;
    cout<<"MIN is : "<<ans[1]<<endl;
    return 0;

}

