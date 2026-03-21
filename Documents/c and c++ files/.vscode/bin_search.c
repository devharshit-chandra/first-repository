#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("array input\n");
    int arr[n];
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i=i+1){
        for(int j=0;j<n-i-1;j=j+1){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    int mid=arr[n/2];
    int search;
    printf("enter number to search : ");
    scanf("%d",&search);
    if(search>mid){
        for(int i=n/2;i<n;i=i+1){
            if(search==arr[i]){
                printf("found at index : %d",i);
            }
        }
    }
    else{
        for(int i=0;i<n/2;i=i+1){
            if(search==arr[i]){
                printf("found at index : %d",i);
            }
        }
    }
}