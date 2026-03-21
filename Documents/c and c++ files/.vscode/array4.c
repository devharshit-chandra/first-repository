#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    printf("array input\n");
    int arr[x];
    for(int i=0;i<x;i=i+1){
        scanf("%d",&arr[i]);
    }
    int n=arr[0];
    for(int i=0;i<x;i=i+1){
        if(i==(x-1)){
            arr[i]=n;
        }
        else{
            arr[i]=arr[i+1];
        }
    }
    for(int i=0;i<x;i=i+1){
        printf("%d ",arr[i]);
    }
}