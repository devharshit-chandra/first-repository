#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(int i=0;i<n;i=i+1){
        int s=1;
        for(int j=0;j<n;j=j+1){
            if(j==a){
                continue;
            }
            else{
                s=s*arr[j];
            }
        }
        arr2[i]=s;
        a=a+1;
    }
    for(int i=0;i<n;i=i+1){
        printf("%d ",arr2[i]);
    }
}