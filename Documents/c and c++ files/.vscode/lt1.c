#include<stdio.h>
int main(){
    printf("array size : ");
    int n;
    scanf("%d",&n);
    printf("array input :\n");
    int mainarr[n];
    for(int i=0;i<n;i=i+1){
        scanf("%d",&mainarr[i]);
    }
    printf("target number : ");
    int target;
    scanf("%d",&target);
    int arr[2];
    for(int i=0;i<sizeof(mainarr);i=i+1){
        for(int j=0;j<sizeof(mainarr);j=j+1){
            if(i==j){
                continue;
            }
            else{
                if((mainarr[i]+mainarr[j])==target){
                    arr[0]=mainarr[i];
                    arr[1]=mainarr[j];
                    break;
                }
            }
        }
    }
    printf("the results are\n");
    if(sizeof(arr)==0){
        printf("no results");
    }
    else{
        for(int i=0;i<2;i=i+1){
            printf("%d ",arr[i]);
        }
    }
}