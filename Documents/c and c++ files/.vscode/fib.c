#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;int b=1;
    while(a<=n){
        printf("%d\n",a);
        int t=a+b;
        a=b;b=t;
    }
}