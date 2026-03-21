#include<stdio.h>
int sum(int n){
    int arr[n];
    int s=0;
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    int res=sum(n);
    printf("%d",res);
}