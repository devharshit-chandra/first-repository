#include <stdio.h>
int main(){
    int x,y,z;
    printf("enter any number : ");
    scanf("%d",&x);
    printf("enter any number : ");
    scanf("%d",&y);
    printf("enter any number : ");
    scanf("%d",&z);
    if (x+y+z>1000){
        printf("the number is greater than thousand");
    }
    else{
        printf("the number is smaller than thousnad");
    }
}