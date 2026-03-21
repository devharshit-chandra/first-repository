#include <stdio.h>
int main(){
    int x;
    int s=0;
    scanf("%d",&x);
    printf("array input\n");
    int arr[x];
    for(int i=0;i<x;i=i+1){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i=i+1){
        s=s+arr[i];
    }
    printf("sum\n");
    printf("%d",s);
}
