#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>

void display(int arr[],int n){
    for(int i = 0; i < n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int IndInsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        printf("overflow error");
        return -1;
    }

    for (int i = size-1; i >= index ; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 0;
    
}


int Inddeletion(int arr[],int size,int capacity,int index){
    if(size<=0){
        printf("underflow error");
        return -1;
    }

    arr[index]='\0';

    for (int i = index; i <size ; i++)
    {
        arr[i]=arr[i+1];
    }
    return 0;
    
}


int main(){
    int arr[100]={1,2,3,6,78};
    int size =5;
    int element=45 , index=3;
    display(arr,size);
    
    IndInsertion(arr, size,element,100,index);
    size++;
    display(arr,size);

    Inddeletion(arr, size,100,1);
    size--;
    display(arr,size);
    return 0;
}