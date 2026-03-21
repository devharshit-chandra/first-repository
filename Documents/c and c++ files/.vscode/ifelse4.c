#include <stdio.h>
int main(){
    int x;
    printf("enter any number : ");\
    scanf("%d",&x);
    if(x>0){
        printf("the negative value of the number is : %d",x*-1);
    }
    else if(x<0){
        printf("the positive value of the number is : %d",x*-1);
    }
    else{
        printf("the number is 0");
    }
}