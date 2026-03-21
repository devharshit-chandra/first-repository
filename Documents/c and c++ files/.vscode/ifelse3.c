#include <stdio.h>
int main(){
    int x,y;
    printf("enter any number : ");
    scanf("%d",&x);
    printf("enter any number : ");
    scanf("%d",&y);
    if (x+y>1000){
        printf("the number is greater than thousand");
    }
    else{
        printf("the number is smaller than thousnad");
    }
}