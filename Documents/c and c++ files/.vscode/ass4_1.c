#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    int s=0;
    for(int i=0;i<n;i=i+1){
        if(i%2==0){
            s=s+arr[i];
        }
    }
    printf("sum of elements at even indexes : %d",s);
}