#include<stdio.h>
void check(int n){
    if (n%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
int main(){
    int x;
    scanf("%d",&x);
    check(x);
}