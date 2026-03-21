#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fs=(n*(n+1))/2;
    int arr[n];
    for (int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i=i+1){
        sum=sum+arr[i];
    }
    int ans=fs-sum;
    printf("missing number : %d",ans);
}