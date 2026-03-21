#include <stdio.h>
int main(){
    int x;
    printf("enter any number : ");
    scanf("%d",&x);
    if (x%5==0){
        printf("the number is divisible by 5");
    }
    else{
        printf("the number is not divisible by 5");
    }
}