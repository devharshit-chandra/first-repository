#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    printf("array input\n");
    int arr[x];
    for(int i=0;i<x;i=i+1){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i=i+1){
        printf("%d ",arr[i]);
    }
}