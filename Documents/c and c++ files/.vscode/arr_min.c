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
    int m=a[0];
    for(int i=1;i<n;i=i+1){
        if(a[i]<m){
            m=a[i];
        }
    }
    printf("%d",m);
}