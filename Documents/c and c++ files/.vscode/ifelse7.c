#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if (x%3==0){
        if (x%5==0){
            printf("number divisible by both 3 and 5");
        }
    }
    else {
        printf("not divisible by 3 or 5");
    }
}