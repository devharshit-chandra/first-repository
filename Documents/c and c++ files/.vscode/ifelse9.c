#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if (x||y||z==0||x||y||z<0){
        printf("it does not form a triangle");
    }
    else if (x+y>z && x+z>y && y+z>x){
        printf("it forms a triangle");
    }
    else{
        printf("it does not form a triangle");
    }
}
