#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i=i+1){
        int x;
        scanf("%d",&x);
        a[i]=x;
    }
    int i=0;
    int j=n-1;
    while(i<=j){
        int t;
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i=i+1;
        j=j-1;
    }
    for(int i=0;i<n;i=i+1){
        printf("%d ",a[i]);
    }
}