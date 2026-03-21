#include<stdio.h>
int fact(int n){
    if (n==0 || n==1){
        return 1;
    }
    else{
        int a=n*fact(n-1);
        return a;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    int y=fact(x);
    printf("%d",y);
}