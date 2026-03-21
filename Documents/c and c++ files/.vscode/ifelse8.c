#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if (x>y && x>z){
        printf("the greatest number is %d",x);
    }
    else if(y>x && y>z){
        printf("the greatest number is %d",y);
    }
    else{
        printf("the greatest number is %d",z);
    }
}