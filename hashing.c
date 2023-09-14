#include <stdio.h>
int hashvalue(int item,int size){
    return (item%size);
}

void insert(int* arr,int item,int size){
    int val;
    val=hashvalue(item,size);
    while(arr[val]!=0){
        item+=1;
        val=hashvalue(item,size);
    }
    arr[val]=item;
}


int main(){
    const int n;
    int i,item;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
            arr[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&item);
        insert(arr,item,n);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
