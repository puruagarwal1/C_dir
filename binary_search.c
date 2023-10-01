#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int binary_search(int arr[],int element,int size){
    int low,mid,high;
    low=0;
    high = size-1;
    mid=low+high/2;
    while(low<=high){
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}

int main(){
    int size=6,element;
    int arr[100];
    for (int i = 0; i < size; i++){
        printf("enter element %d ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter an element to search");
    scanf("%d",&element);
    int found;
    found=binary_search(arr,element,6);
    printf("element found at index %d",found+1);
    

    return 0;
}